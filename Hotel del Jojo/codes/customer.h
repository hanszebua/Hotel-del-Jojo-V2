//  ======CREATE=========
Customer* bentuk(int customer_id, const char *customer_name, int customer_age, const char *customer_cause_of_death, const char *customer_resting_place, int customer_died_year, int room_type_id) {  
    Customer *newCustomer = (Customer*)malloc(sizeof(Customer));
    strcpy(newCustomer->customer_name, customer_name);
    newCustomer->customer_age = customer_age;
    strcpy(newCustomer->customer_cause_of_death, customer_cause_of_death);
    strcpy(newCustomer->customer_resting_place, customer_resting_place);
    newCustomer->customer_died_year = customer_died_year;
    newCustomer->room_type_id = room_type_id;
    return newCustomer;
}  

// ========READ==========
void baca(Customer *s) {
    printf("Name: %s\n", s->name);
    printf("GPA: %lf\n", s->GPA);
    printf("Course ID: %s\n", s->c.ID);                              
    printf("Nama Dosen: %s\n", s->c.namaDosen);
}

// //==========UPDATE==============
// void update (Student *s) {
//     strcpy(s->name, "Tanto");
// }

// //===========DELETE=============
// void remove (Student *s) {
//     free(s);
//     s = NULL;
// }
