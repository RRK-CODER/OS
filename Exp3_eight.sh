echo "Menu \n 1 Create a file \n 2 Display the contents \n 3 Sort the file according to a column \n 4 Display the number of lines"
echo "Enter a choice"
read ch
case $ch in
1) echo "Enter a name"
read name
cat > $name ;;
2)echo "Enter the filename"
read name
cat $name;;
3)echo "Enter a filename"
read name
Sort -k 2n $name;;
4)echo "Enter filename"
read fname
cat $fname | wc -l;;
*)echo "Invalid choice";;
esac
