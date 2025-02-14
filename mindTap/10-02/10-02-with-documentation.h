#include <string> 

using namespace std;

class productType                               
{                                               
public:
    //set everything to default values                                         
    productType(); 

    //set quantity, price, discount to given values, if a value is negative, set to zero                             
    productType(int, double, double);           

    //set the input string to id
    ///set quantity, price, discount to given values, if a value is negative, set to zero
    productType(string, int, double, double);   
    
    //set the three input strings to name, id, manufacturer
    //set the three input numeric values to quantity, price, discount, no negative values
    productType(string, string, string, 
                int, double, double);           

    //same as above
    void set(string, string, string, int, 
             double, double); 

    //print all values                          
    void print() const;                         

    //setter and getter for quantity, no negative value
    void setQuantitiesInStock(int x);                  
    int getQuantitiesInStock() const;

    //setter and getter for price, no negative value           
    void setPrice(double x);                    
    double getPrice() const;

    //setter and getter for discount, no negative value                    
    void setDiscount(double d);                 
    double getDiscount() const;      

    //add the given quantity to the existing quantity
    //if the resulting quantity is negative, then set it to zero
    void updateQuantitiesInStock(int x);               
     
private:                                        
    string productName;                         
    string id;                                  
    string manufacturer;                        
    int quantitiesInStock;                      
    double price;                               
    double discount;                            
};                                              
