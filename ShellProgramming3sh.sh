echo -e "Menu \n 1 for listing directory content \n 2 for print name of current directory \n 3 for Show who is logged on \n 4 Show directory content using long listing format"
echo "Enter your choice "
read ch
case $ch in 
1) ls;;
2) pwd;;
3) who;;
4) ls -l;;
*) echo "Invalid choice : Try Again !!"
esac 