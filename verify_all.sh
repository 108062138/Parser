GREEN="\e[1;32m pass^_^ \e[0m";
RED="\e[1;31m failOuO \e[0m";
GREEN='\033[0;32m';
BLUE='\033[0;35m';
RED='\033[0;31m';
END='\033[0m';
make

for FILE in ./testcases/*;do
./parser < $FILE > MYOUTPUT.xml;
golden_parser < $FILE > GOLDENOUTPUT.xml;
echo $FILE;
diff MYOUTPUT.xml GOLDENOUTPUT.xml
#DIFF=$(diff MYOUTPUT.txt GOLDENOUTPUT.txt);
#if [ "$DIFF" != ""]
#then echo -e "${BLUE}${FILE}${END} ${RED}FAIL...OuO${END}";
#else echo -e "${BLUE}${FILE}${END} ${GREEN}PASS!\\>_<//${END}";
#fi
done
