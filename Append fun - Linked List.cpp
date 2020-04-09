#include <iostream>
#include <vector>
using namespace std ;

class linkedlist {
    
struct Node {
    
    int Data;
    Node* next;
};
  
  Node* head = NULL ;
  
public : 

void append (int val){
   
  Node *newnode = new Node ;
  Node->Data = val;
  Node->next = NULL ;
//---------------------------
  
  if (head==NULL){
      head = newnode;
  }
   
  else {
    
    Node* Temp = head;
    while (Temp->next != NULL ) {
        Temp = Temp->next ;
    }
       
        newnode = Temp->next ; 
       
  } 




}     

void append_at_pos () {
    
}

void delete(){
    
}
  
void display(){
    
}  
  
  
  
  
    
};


int main(){
    
    
    
}