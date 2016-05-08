--Top Level Pipelined SRC

LIBRARY IEEE ;
USE IEEE.STD_LOGIC_1164.ALL ;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.NUMERIC_STD.ALL;

Entity top_src is
    Port(
        clk:            IN      STD_LOGIC;
        reset:          IN      STD_LOGIC;
        d:              INOUT   STD_LOGIC_VECTOR(31 downto 0);
        address:        OUT     STD_LOGIC_VECTOR(31 downto 0);
--        read:           OUT     STD_LOGIC;
--        write:          OUT     STD_LOGIC;
        done:           IN      STD_LOGIC
        );
end top_src;

Architecture structure of top_src is
    
    Component instMem
        Port (
            reset:      in      STD_LOGIC; 
            d :         out     STD_LOGIC_VECTOR (31 downto 0);
            address :   in      STD_LOGIC_VECTOR (31 downto 0);
            clk :       in      STD_LOGIC
            );
    end Component;

    Component PC 
        Port (
            nextInstruction:    IN      STD_LOGIC_VECTOR(31 downto 0);
            clk:                IN      STD_LOGIC;
            reset:              IN      STD_LOGIC;
            instOut:            OUT     STD_LOGIC_VECTOR(31 downto 0)
        );
        end Component;
        
    Component PC2reg
        Port(
            clk : in STD_LOGIC;
            PC2in : in STD_LOGIC_VECTOR (31 downto 0);
            PC2out : out STD_LOGIC_VECTOR (31 downto 0)
           );
        end Component;
        
    Component branchLogic
        Port(
                c3 :    in      STD_LOGIC_VECTOR (2 downto 0);
                rc :    in      STD_LOGIC_VECTOR (31 downto 0);
                branch: in      STD_LOGIC;
                Mp1:    out     STD_LOGIC
        );
        end Component;
        
    Component inc4
        Port(
            clk:    in  STD_LOGIC;
            reset:  in STD_LOGIC;
            bus_in : in STD_LOGIC_VECTOR (31 downto 0);
            bus_out : out STD_LOGIC_VECTOR (31 downto 0)
     );
     end Component;
     
     Component mux_2_1
        generic(N: integer);
        Port(
            sel:     in STD_LOGIC;
            input1 : in STD_LOGIC_VECTOR (N-1 downto 0);
            input0 : in STD_LOGIC_VECTOR (N-1 downto 0);
            output : out STD_LOGIC_VECTOR (N-1 downto 0)
     );
     end Component;
     
     Component mux_3_1
     Port ( sel :    in  STD_LOGIC_VECTOR (1 downto 0);
        input2:  in  STD_LOGIC_VECTOR (31 downto 0);
        input1 : in  STD_LOGIC_VECTOR (16 downto 0);
        input0 : in  STD_LOGIC_VECTOR (21 downto 0);
        output : out STD_LOGIC_VECTOR (31 downto 0));
     end Component;
     
     Component IR2
     Port(
        clk:            in      STD_LOGIC;
        instruction :   in      STD_LOGIC_VECTOR (31 downto 0);
        op :            out     STD_LOGIC_VECTOR(4 downto 0);
        ra :            out     STD_LOGIC_VECTOR(4 downto 0);
        rb :            out     STD_LOGIC_VECTOR(4 downto 0);
        rc :            out     STD_LOGIC_VECTOR(4 downto 0);
        c1 :            out     STD_LOGIC_VECTOR(21 downto 0);
        c2 :            out     STD_LOGIC_VECTOR(16 downto 0);
        c3 :            out     STD_LOGIC_VECTOR(2 downto 0);
        G1 :            out     STD_LOGIC;
        GA1:            out     STD_LOGIC;
        G2:             out     STD_LOGIC;
        Mp3:            out     STD_LOGIC;
        Mp4:            out     STD_LOGIC_VECTOR(1 downto 0);
        imm2:           out     STD_LOGIC;
        alu2:           out     STD_LOGIC;
        rel2:           out     STD_LOGIC;
        dsp2:           out     STD_LOGIC;
        store2:         out     STD_LOGIC;
        branch2:        out     STD_LOGIC;
        brl2:           out     STD_LOGIC
     );
     end Component;
     
     Component IR3
     Port(
        clk:                in      STD_LOGIC;
        op_in:              in      STD_LOGIC_VECTOR(4 downto 0);
        ra_in:              in      STD_LOGIC_VECTOR(4 downto 0);
        op_out:            out      STD_LOGIC_VECTOR(4 downto 0);
        ra_out:            out      STD_LOGIC_VECTOR(4 downto 0)
    );
    end Component;
    
    Component reg_File
    Port(
        a1address :  in  STD_LOGIC_VECTOR (4 downto 0);
        a2address :  in  STD_LOGIC_VECTOR (4 downto 0);
        a3address :  in  STD_LOGIC_VECTOR (4 downto 0);
        R3data :     in  STD_LOGIC_VECTOR (31 downto 0);
        R1data :     out STD_LOGIC_VECTOR (31 downto 0);
        R2data :     out STD_LOGIC_VECTOR (31 downto 0);
        G1:          in  STD_LOGIC;
        GA1:         in  STD_LOGIC;
        G2:          in  STD_LOGIC;
        W3:          in  STD_LOGIC 
    );
    end Component;
    
    Component reg
    Port(
        clk:            in      STD_LOGIC;
        data_in:        in      STD_LOGIC_VECTOR(31 downto 0);
        data_out:       out     STD_LOGIC_VECTOR(31 downto 0)
    );
    end Component;
    
    Component decode3 is
    Port ( 
        op:             IN      STD_LOGIC_VECTOR(4 downto 0);
        ALU_OP:         OUT     STD_LOGIC_VECTOR(11 downto 0)
    );
    end Component;
    
    Component ALU
    Port ( 
        A : in STD_LOGIC_VECTOR (31 downto 0);
        B : in STD_LOGIC_VECTOR (31 downto 0);
        C : out STD_LOGIC_VECTOR (31 downto 0);
        ALU_Op : in STD_LOGIC_VECTOR (11 downto 0)
    );
    end Component;
    
    Component decode4 is
    Port (
        clk:            IN      STD_LOGIC; 
        op:             IN      STD_LOGIC_VECTOR(4 downto 0);
        load:           OUT     STD_LOGIC;
        store:          OUT     STD_LOGIC
      );
    end Component;
    
    Component decode5 is
      Port (
         clk:            IN      STD_LOGIC; 
         op:             IN      STD_LOGIC_VECTOR(4 downto 0);
         W3:             OUT     STD_LOGIC
      );
    end Component;
    
    component dataMem is
    Port ( addr :       in      STD_LOGIC_VECTOR (31 downto 0);
       load:        in      STD_LOGIC;
       store:       in      STD_LOGIC;
       data :       inout   STD_LOGIC_VECTOR (31 downto 0));
    end Component;
    
    component mem_buffer is
    Port ( data_in:         in  STD_LOGIC_VECTOR(31 downto 0);
            sel:            in  STD_LOGIC;
            data_out:       out STD_LOGIC_VECTOR(31 downto 0)
         );
     end component;
     
    signal mp1:                STD_LOGIC;
    signal mp2:                STD_LOGIC;
    signal mp3:                STD_LOGIC;
    signal mp4:                STD_LOGIC_VECTOR(1 downto 0);
    signal mp5:                STD_LOGIC;
    signal read:               STD_LOGIC;
    signal write:              STD_LOGIC;
    signal pc2_out:            STD_LOGIC_VECTOR(31 downto 0);
    signal instruction:        STD_LOGIC_VECTOR(31 downto 0);
    signal cpu_bus:            STD_LOGIC_VECTOR(31 downto 0);
    signal op:                 STD_LOGIC_VECTOR(4 downto 0);
    signal op2:                STD_LOGIC_VECTOR(4 downto 0);
    signal op3:                STD_LOGIC_VECTOR(4 downto 0);
    signal op4:                STD_LOGIC_VECTOR(4 downto 0);
    signal op5:                STD_LOGIC_VECTOR(4 downto 0);
    signal rb:                 STD_LOGIC_VECTOR(4 downto 0);
    signal ra:                 STD_LOGIC_VECTOR(4 downto 0);
    signal ra2:                STD_LOGIC_VECTOR(4 downto 0);
    signal ra3:                STD_LOGIC_VECTOR(4 downto 0);
    signal ra4:                STD_LOGIC_VECTOR(4 downto 0);
    signal ra5:                STD_LOGIC_VECTOR(4 downto 0);
    signal rc:                 STD_LOGIC_VECTOR(4 downto 0);
    signal c1:                 STD_LOGIC_VECTOR(21 downto 0);
    signal c2:                 STD_LOGIC_VECTOR(16 downto 0);
    signal c3:                 STD_LOGIC_VECTOR(2 downto 0);
    signal PC_inc4:            STD_LOGIC_VECTOR(31 downto 0);
    --Stage 2 signals
    signal imm2:               STD_LOGIC;
    signal alu2:               STD_LOGIC;
    signal rel2:               STD_LOGIC;
    signal dsp2:               STD_LOGIC;
    signal store2:             STD_LOGIC;
    signal branch2:            STD_LOGIC;
    signal brl2:               STD_LOGIC;
    signal cond:               STD_LOGIC;
    signal pc_bus_in:          STD_LOGIC_VECTOR(31 downto 0);   
    signal a1:                 STD_LOGIC_VECTOR(4 downto 0);
    signal a2:                 STD_LOGIC_VECTOR(4 downto 0);
    signal a3:                 STD_LOGIC_VECTOR(4 downto 0);
    signal R1data:             STD_LOGIC_VECTOR(31 downto 0);
    signal R2data:             STD_LOGIC_VECTOR(31 downto 0);
    signal R3data:             STD_LOGIC_VECTOR(31 downto 0);
    signal G1:                 STD_LOGIC;
    signal GA1:                STD_LOGIC;
    signal G2:                 STD_LOGIC;
    signal W3:                 STD_LOGIC;
    signal X3_in:              STD_LOGIC_VECTOR(31 downto 0);
    signal X3_out:             STD_LOGIC_VECTOR(31 downto 0);
    signal Y3_in:              STD_LOGIC_VECTOR(31 downto 0);
    signal Y3_out:             STD_LOGIC_VECTOR(31 downto 0);
    signal MD4_in:             STD_LOGIC_VECTOR(31 downto 0);
    signal MD4_out:            STD_LOGIC_VECTOR(31 downto 0);
    signal Z4_in:              STD_LOGIC_VECTOR(31 downto 0);
    signal Z4_out:             STD_LOGIC_VECTOR(31 downto 0);
    signal Z5_in:              STD_LOGIC_VECTOR(31 downto 0);
    signal Z5_out:             STD_LOGIC_VECTOR(31 downto 0);    
    signal aluop:              STD_LOGIC_VECTOR(11 downto 0);
    signal load4:              STD_LOGIC;
    signal store4:             STD_LOGIC;
    signal mem_data:           STD_LOGIC_VECTOR(31 downto 0);
    signal mem_data_out:       STD_LOGIC_VECTOR(31 downto 0);


begin       

--Stage 1 components are the Instruction memory, PC register, Mp1 multiplexer, and the Inc4    
--component to store the program to be run    
    instMemory:instMem
    Port Map(
        reset=>reset,
        d=>instruction,
        address=>cpu_bus,
        clk=>clk
    );
 
--Register to store the address of the next instruction to be run
    regpc:PC
    Port Map(
        nextInstruction => pc_bus_in,
        clk => clk,
        reset=>reset,
        instOut=>cpu_bus
    );

--Component to increment the PC by 4 for non-branch instructions
     incPC:inc4
     Port Map(
        clk=>clk,
        reset=>reset,
        bus_in=>cpu_bus,
        bus_out=>pc_inc4
    );

--Selects either the INC4 or the branch address for the new PC value
-- if (branch and cond) then it passes R1data
-- if not(branch and cond) then it passes INC4     
    Mp1_mux:mux_2_1
    generic map (N=>32)
    Port Map(
        sel=>mp1,
        input1=>R1data,
        input0=>pc_inc4,
        output=>pc_bus_in
    );
        
--Stage 2 components are the PC2reg, MP2 -4 multiplexors, the branch logic and the IR2 register
--Passes the PC+4 value down the pipeline for PC based relative addressing           
     regpc2:PC2reg
     Port Map(
        clk => clk,
        PC2in =>pc_inc4,
        PC2out =>pc2_out
     );
                    
--selects either the rc or ra value for the address of R2data
--if (store) then ra
--if (not store) then rc
    Mp2_mux:mux_2_1
    generic map (N=>5)
    Port Map(
        sel=>store2,
        input1=>ra,
        input0=>rc,
        output=>a2
    );

--selects the output of the PC2reg or the R1data for the input to X3
--if (rl or branch) then PC2
--if (dsp or alu) then R1data    
    Mp3_mux:mux_2_1
    generic map(N=>32)
    Port Map(
        sel=>mp3,
        input1=>R1data,
        input0=>pc2_out,
        output=>X3_in
    );

--Stores the instruction from the instruction memory, parses and decodes the instruction for stage 2 of pipeline        
    InstReg2: IR2
    Port Map(
        clk=>clk,
        instruction=>instruction,
        op=>op,
        ra=>ra,
        rb=>rb,
        rc=>rc,
        c1=>c1,
        c2=>c2,
        c3=>c3,
        G1=>G1,
        GA1=>GA1,
        G2=>G2,
        Mp3=>mp3,
        Mp4=>mp4,
        imm2=>imm2,
        alu2=>alu2,
        rel2=>rel2,
        dsp2=>dsp2,
        store2=>store2,
        branch2=>branch2,
        brl2=>brl2
    );

--Register File
    registers: reg_File
    Port Map(
        a1address=>rb,
        a2address=>a2,
        a3address=>a3,
        R3data=>R3data,
        R1data=>R1data,
        R2data=>R2data,
        G1=>G1,
        GA1=>GA1,
        G2=>G2,
        W3=>W3
    );

--Branch Logic
--Determines if branch should be taken and sets cond signal if condition is met    
    BranchLog: branchLogic
    Port Map(
        c3=>c3,
        rc=>R2data,
        branch=>branch2,
        Mp1=>mp1
    );
    
--Mp4 mux selects the input for the Y3 register
--if(rl) then selects c1 sign extended to 32-bits
--if(dsp or imm) then c2 sign extended to 32-bits
--if(alu and not imm) then R2data
    Mp4_mux:  mux_3_1
    Port Map(
        sel=>mp4,
        input2=>R2data,
        input1=>c2,
        input0=>c1,
        output=>Y3_in
    );

--Stage 3 components are the IR3, X3, Y3, MD3 registers, the ALU and decode3
--Instruction register that stores the opcode and ra value for this stage of the pipline.
--passes the op and ra to the decoder and the next pipeline instruction register        
    InstReg3: IR3
    Port Map(
        clk=>clk,
        op_in=>op,
        ra_in=>ra,
        op_out=>op3,
        ra_out=>ra3
    );

--Decoder for stage 3
--Decodes the ALUop for the ALU    
    Decoder3: decode3
    Port Map(
        op=>op3,
        ALU_OP=>aluop
    );

--ALU performs the ALU operations and feeds the output to the Z4 register
    ArithUnit: ALU
    Port Map( 
        A=>X3_out,
        B=>Y3_out,
        C=>Z4_in,
        ALU_Op=>aluop
    );
    
--X3 register stores the value for the A operand of the ALU
    X3: reg
    Port Map(
        clk=>clk,
        data_in=>X3_in,
        data_out=>X3_out
    );

--Y3 register stores the value for the B operand of the ALU
    Y3: reg
    Port Map(
        clk=>clk,
        data_in=>Y3_in,
        data_out=>Y3_out
    );    

--MD3 register stores the R2data to pass down to the MD4 register 
    MD3: reg
    Port Map(
        clk=>clk,
        data_in=>R2data,
        data_out=>MD4_in
    );
        
--Stage 4 components are the IR4, Z4, MD4 registers, Decode4, data memory and the MP5 multiplexer
--IR4 compoent to store the op and ra value for stage 4 of the pipeline
    InstReg4: IR3
    Port Map(
        clk=>clk,
        op_in=>op3,
        ra_in=>ra3,
        op_out=>op4,
        ra_out=>ra4
    );
    
--Z4 register stores the output of the ALU    
    Z4: reg
    Port Map(
        clk=>clk,
        data_in=>Z4_in,
        data_out=>Z4_out
    );
    
--MD4 register store the value from the MD3 register that is R2data for this stage of pipeline
    MD4: reg
    Port Map(
        clk=>clk,
        data_in=>MD4_in,
        data_out=>MD4_out
    );

--Decode4 decodes the op for load/store instructions.  Generates control signals for
--the data memory and Mp5 multiplexor    
    Decoder4: decode4
    Port Map(
        clk=>clk,
        op=>op4,
        load=>load4,
        store=>store4
    );
    
--Data memory
    DataMemory: dataMem
    Port Map(
        addr=>Z4_out,
        load=>load4,
        store=>store4,
        data=>mem_data
    );
    
--Buffer for memory data in
    memIN: mem_buffer
    Port Map
    (
        data_in=>MD4_out,
        sel=>store4,
        data_out=>mem_data
    );
    
--Buffer for memory data out
    memOut: mem_buffer
    Port Map
    (
        data_in=>mem_data,
        sel=>load4,
        data_out=>mem_data_out
    );

--MP5 mux selects either Z4 or mem_data for input to stage 5
--if (not load) then Z4
--if (load) then mem_data    
    Mp5_mux:mux_2_1
    generic map(N=>32)
    Port Map(
        sel=>load4,
        input1=>mem_data_out,
        input0=>Z4_out,
        output=>Z5_in
    );
       
--Stage5 components are IR5, decode5, and Z5 register
--IR5 stores the op and ra values for stage 5 of the pipeline            
    InstReg5: IR3
    Port Map(
        clk=>clk,
        op_in=>op4,
        ra_in=>ra4,
        op_out=>op5,
        ra_out=>a3
    );
    
--Decode5 determines if the regWrite signal W3 needs to be set or not    
    Decoder5: decode5
    Port Map(
        clk=>clk,
        op=>op5,
        W3=>W3
    );
    
--Z5 register stores the output of the memory operation    
        Z5: reg
        Port Map(
            clk=>clk,
            data_in=>Z5_in,
            data_out=>R3data
        );
    

       
end structure;