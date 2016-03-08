x="$1"
echo "$2" $(date)
while [ $x -gt 0 ]; do x=$(( x-1 ));done
echo "$2" $(date)
