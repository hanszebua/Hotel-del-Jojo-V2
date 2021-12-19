#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "customer.h"

struct Customer {
    int customer_id;
    char customer_name[255];
    int customer_age;
    char customer_cause_of_death[255];
    char customer_resting_place[255];
    int customer_died_year;
    int room_type_id;
};

struct Room_type {
    int room_type_id;
    char room_type_name[255];
    int room_type_price;
};

void import_data_from_file() {
    char* alamatcustomer = "\\wsl$\\Ubuntu\\home\\hansz\\BootcampDatastruct\\session-1\\Hotel-del-Jojo-V2\\Hotel del Jojo\\customer\\customer_data.txt";
    FILE *customer;
    customer = fopen("alamatcustomer", "r");
    char* alamatroom = "\\wsl$\\Ubuntu\\home\\hansz\\BootcampDatastruct\\session-1\\Hotel-del-Jojo-V2\\Hotel del Jojo\\room\\room.txt";
    FILE *room;
    room = fopen("alamatroom", "r");
}

void menu (int *pilih) {
    printf("1. Add New Customer\n");
    printf("2. Read data\n");
    printf("3. Uptade data\n");
    printf("4. Remove data\n");
    printf("5. Exit\n");
    printf("\n");
    printf("Choice [1-5] >> ");
    scanf("%d, pilih");
}

int main () {
    int pilih;
    import_data_from_file();
    while (pilih < 5) {
        menu(&pilih);
		if (pilih == 1) {
            
		} 
		else if (pilih == 2) 
		{

		} 
		else if (pilih == 3) 
		{

		} else if (pilih == 4) {

        }        
    }
    fcloseall();
    //exit screen
}