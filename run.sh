make
rm ./GOLDENOUTPUT.xml
rm ./MYOUTPUT.xml
./parser < ./testcases/test1.c > MYOUTPUT.xml
golden_parser < ./testcases/test1.c > GOLDENOUTPUT.xml
diff MYOUTPUT.xml GOLDENOUTPUT.xml
