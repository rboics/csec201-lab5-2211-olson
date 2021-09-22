#include "blockchain.h"

struct Blockchain *initialize(){
    struct Blockchain *chain = (struct Blockchain*)malloc(sizeof(struct Blockchain));
    chain->size = 0;
    chain->head = NULL;
    return chain;
}

void print_blockchain(struct Blockchain *blockchain){
    printf("Printing...\n");
    struct Block *current = blockchain->head;
    while(current){
        printf("{height: %d, data: %d, prev_hash: %d %d %d %d %d}\n", 
        current->height, current->data, current->prev_hash.hash0, current->prev_hash.hash1,
        current->prev_hash.hash2, current->prev_hash.hash3, current->prev_hash.hash4);
        current = current->prev_block;
    }
}

int main(){

    // For signoffs, uncomment the following 6 lines.
    // struct Blockchain *blockchain = initialize();
    // for (int i = 1; i<=5; i++){
    //     add(blockchain, 10*i);
    // }
    // print_blockchain(blockchain);
    // verify(blockchain);
    
    // Test 1: Uncomment the following three lines:
    // alter_block(blockchain, 2, 300);
    // print_blockchain(blockchain);
    // verify(blockchain);

    // Test 2: comment Test 1 out and uncomment the following three lines:
    // alter_2_blocks(blockchain, 1, 200);
    // print_blockchain(blockchain);
    // verify(blockchain);

    // Test 3: Comment Test 2 out and uncomment the following three lines:
    // delete_at(blockchain, 1);
    // print_blockchain(blockchain);
    // verify(blockchain);


    return 0;
}

