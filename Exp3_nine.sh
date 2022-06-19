echo "Enter a filename"
read fname
if [ -f $fname ]
then
echo "Enter a choice "
read ch
grep "$ch" $fname
fi