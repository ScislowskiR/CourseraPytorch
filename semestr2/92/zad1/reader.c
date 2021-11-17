/*
#include <stdio.h>
#include <stdbool.h>

typedef enum State {
    LED_OFF , // Stan S1
    LED_ON // Stan S2
} State_t ;
void turnOnLed (){
    printf("siema");
}
void turnOffLed (){
    printf("elo");
}
unsigned short getNextBit (){
    printf("kor");
}
int main(){
    State_t currentState = LED_OFF;
    while ( true ) {
        unsigned short nextBit = getNextBit();
        switch ( currentState ) {
            case LED_OFF :
                if ( nextBit == 1) {
                    turnOnLed();
                    currentState = LED_ON;
                }
                break;
            case LED_ON :
                if ( nextBit == 0) {
                turnOffLed();
                currentState = LED_OFF;
                }
                break;
        }
    }
}*/
/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int entry_state(void);
int foo_state(void);
int bar_state(void);
int exit_state(void);

*/
/* array and enum below must be in sync! *//*

int (* state[])(void) = { entry_state, foo_state, bar_state, exit_state};
enum state_codes { entry, foo, bar, end};

enum ret_codes { ok, fail, repeat};
struct transition {
    enum state_codes src_state;
    enum ret_codes   ret_code;
    enum state_codes dst_state;
};
*/
/* transitions from end state aren't needed *//*

struct transition state_transitions[] = {
        {entry, ok,     foo},
        {entry, fail,   end},
        {foo,   ok,     bar},
        {foo,   fail,   end},
        {foo,   repeat, foo},
        {bar,   ok,     end},
        {bar,   fail,   end},
        {bar,   repeat, foo}};

#define EXIT_STATE end
#define ENTRY_STATE entry

int main(int argc, char *argv[]) {
    enum state_codes cur_state = ENTRY_STATE;
    enum ret_codes rc;
    int (* state_fun)(void);

    for (;;) {
        state_fun = state[cur_state];
        rc = state_fun();
        if (EXIT_STATE == cur_state)
            break;
        cur_state = lookup_transitions(cur_state, rc);
    }

    return EXIT_SUCCESS;
#include "reader.h"

char readChar() {
    char character;
    while ((character = getchar()) == '\n' || character == EOF) {}
    return character;
}
}*/