#include <cstdlib>
#include "function.h"

//generic swap function
template<class T>
void swap_func(T *a, T *b){
    //swap
    T temp = *a;
    *a = *b;
    *b = temp;
}

void LinkedList::reverse(int left, int right){
  
    while(left < right){
		 //initialise variables
		int cup_num = 1, node_counter = 0;
		Node * temp = head;
		Node * first_node, * second_node;

        //find balls
        while(node_counter != 2){
            if(temp == NULL){
                return;
            }

            //ball 1
            if(cup_num == left){
                first_node = temp;
                node_counter++;
            }

            //ball2
            if (cup_num == right){
                second_node = temp;
                node_counter++;
            }

            //update
            temp = temp->next;
            cup_num++;
        }

        //swap
        swap_func(&first_node->ball, &second_node->ball);
        //update
        left++;
        right--;
    }

}
