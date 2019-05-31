#!/bin/bash
echo '[[num game]]'
thenumber=$(($RANDOM % 100))
#thenumber=99
numtry=1
lasttry=0
#read -p 'guess the number from 0 to 99.' ans
echo guess the number from 0 to 99.
ans=50
echo "My answer is 50"
lasttry=$ans
guessmax=99
guessmin=0
until (( ans == thenumber ))
do
	if ((ans > thenumber)) ; then
		echo "too huge."
		guessmax=$lasttry
		echo "You trying $((++numtry))times.How?"
		ans=$(($(($guessmin + $guessmax))/2))
	else
		echo "too small."
		guessmin=$lasttry
		echo "You trying $((++numtry))times.How?"
		ans=$(($(($guessmax + $guessmin))/2))
	fi
	#echo -n "you trying $((++numtry))times.How?"
	#read -p 'How? (0-99): ' ans
	echo "My answer is ${ans}."
	echo "My guessmax is ${guessmax}."
	echo "My guessmin is ${guessmin}." 
	lasttry=$ans
done
echo "you answerd at ${numtry}times."
