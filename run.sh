make
./parser < ./test.c > MYOUTPUT.xml
golden_parser < ./test.c > GOLDENOUTPUT.xml
diff MYOUTPUT.xml GOLDENOUTPUT.xml
