echo - e"Menu \n 1 for list directory content \n 2 for print name of current directory \n 3 for Show who is logged on \n 4 Show directories content using long listed format"
echo - "Enter your choice "
read ch
case $ch in
1)ls;;
2)pwd;;
3)who;;
4)ls -l;;
*) echo "Invalid Choice : Try Again!!"
esac
