#! /bin/bash 
function fooc(){
	if [[ $(pwd) ==  "/home/taha/Bureau" ]];
	then
		for i in $(ls) ;
		do
			if [[ -f $i ]];
			then
			echo "fichier $i"

               	elif [[ -d $i ]];
                then
                        echo "dossier $i"
		fi
		done
	else
		cd ..
		fooc
	fi

}
fooc
