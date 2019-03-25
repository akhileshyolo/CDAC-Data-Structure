#!/bin/bash

DB_LOCATION='/home/akhilesh/coding/Operating*/pbook.db'


display(){

	local contacts_count=`wc -l $DB_LOCATION | cut -d" " -f1`
	echo "There are $contacts_count contacts in Phonebook Directory."

	IFS=$'\n' #line separator newline

	index=0;

	for i in $(cat $DB_LOCATION);
	do
	        echo $((++index))
	        echo -e "Name \c" && echo "$i" | cut -d":" -f1  
        	echo -e "Phone 1:\c" && echo "$i" | cut -d":" -f2
	 	echo -e "Phone 2:\c" && echo "$i" | cut -d":" -f3
	 	echo -e "Phone 3:\c" && echo "$i" | cut -d":" -f4
	 	echo -e "Address:\c" && echo "$i" | cut -d":" -f5
	 	echo -e "City   :\c" && echo "$i" | cut -d":" -f6
	 	echo -e "State  :\c" && echo "$i" | cut -d":" -f7
	 	echo -e "Pincode:\c" && echo "$i" | cut -d":" -f8

		echo ""
	     
	done

}

add_contact(){

	local t_name t_phone1 t_phone2 t_phone3 t_address t_city t_state t_pincode
	read -p "Enter Name   :" t_name
        read -p "Enter Phone 1:" t_phone1	
	read -p "Enter Phone 2:" t_phone2
	read -p "Enter Phone 3:" t_phone3
	read -p "Enter Address:" t_address
	read -p "Enter City   :" t_city
	read -p "Enter State  :" t_state
	read -p "Enter Pincode:" t_pincode

	echo "$t_name:$t_phone1:$t_phone2:$t_phone3:$t_address:$t_city:$t_state:$t_pincode">>${DB_LOCATION};

}


search_contact(){
	read -p "Enter name to search:" search_pattern
	#local data=`$search_pattern ${DB_LOCATION} | cat`

	echo -e "\n\n"

	index=0;
	IFS=$'\n'
	for i in $(grep $search_pattern ${DB_LOCATION} | cat)
	do
	        echo $((++index))
	        echo -e "Name \c" && echo "$i" | cut -d":" -f1  
        	echo -e "Phone 1:\c" && echo "$i" | cut -d":" -f2
	 	echo -e "Phone 2:\c" && echo "$i" | cut -d":" -f3
	 	echo -e "Phone 3:\c" && echo "$i" | cut -d":" -f4
	 	echo -e "Address:\c" && echo "$i" | cut -d":" -f5
	 	echo -e "City   :\c" && echo "$i" | cut -d":" -f6
	 	echo -e "State  :\c" && echo "$i" | cut -d":" -f7
	 	echo -e "Pincode:\c" && echo "$i" | cut -d":" -f8

		echo ""
	     
	done

}

delete_contact(){

	read -p "Enter Search Term:" rdata

	for i in $(grep -n $rdata ${DB_LOCATION} )
	do
		echo "$i"
	done

	read -p "\nEnter phone ID to delete. Press 0 to Cancel :" prompt

	if [ $prompt -ne 0 ]
       	then
		sed -i "$prompt"d"" $DB_LOCATION
		
		echo -e "\nDeleted succesfully"
	else
		echo -e "\nDelete Operation Cancelled"
	fi

}

menu(){

	echo "
		1. Add New Contact
		2. Search Contact
		3. Update Contact
		4. Delete Contact
		5. Contact Listings

		Press Option Key!
	"

	read user_choice

	case $user_choice in
		"1" ) add_contact
			;;
		
		"2" ) search_contact
			;;
		"3" ) echo "Hi 3"
			;;
		"4" ) delete_contact
			;;

		"5" ) display
			;;
		* ) echo "Default"
			;;

	esac

}



menu
