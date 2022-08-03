# Parser
> by popo
## abstract
- This project is about the second project in LJK-NTHU-COMPILER class. This project aims to transfer `.c` into `.xml`. `.xml` files may take some `.xml` formatter to demonstrate. It takes `Tokenizer`'s token, which is generated from the `scanner.l`, to generate `.xml` files. The main component inside this project is `parser.l`. It uses `LALR`(maybe?) to automically generate states to process those tokens. 
## how to run this project
- type `chmod 777 run.sh` to enable the the shell script in the current working directory
- `./run.sh` to automically test all the testbench under `/testcases` folder
## support function
- Almost, but not every `.c`'s operator. Their precedence is defined at [cpp prec](https://en.cppreference.com/w/cpp/language/operator_precedence)
- p-extension
