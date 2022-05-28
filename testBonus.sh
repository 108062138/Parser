make
rm ./MYOUTPUT.xml
./parser < ./bonus/input.txt > MYOUTPUT.xml
diff MYOUTPUT.xml ./bonus/answer.txt