//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 

     

    

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");

    if (matchPtr != NULL)
        printf("Employee phone number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee phone number 213-555-1212 is not found in record\n");


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);

    if (matchPtr != NULL)
        printf("Employee with salary 8.32 is in record %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee with salary 8.32 is not found in record\n");
        
    return EXIT_SUCCESS; 
}