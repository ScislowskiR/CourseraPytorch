/*
#include <stdio.h>
#include <string.h>

#include "list.h"
#include "comparators.h"
#include "dispatcher.h"
#include "parser.h"


typedef  struct  Task
{
    char  instruction[MAX_INSTRUCTION_LENGTH ];
    bool (* executor)(int, int);
} Task_t;


void dispatch(Node_t ** root, ParsedCommand_t parsedCommand)
{
    static  const  Task_t  taskList[] =
            {
                    (Task_t){"isEqual" , isEqual},
                    (Task_t){"isGreater", isGreater},
                    (Task_t){"isLess", isLess}
            };

    int size = sizeof(taskList);
    int size2 = sizeof(Task_t);

    for(unsigned int i =0; i < (size/size2);i++)
    {
        if (strncmp(taskList[i].instruction, parsedCommand.instruction, MAX_INSTRUCTION_LENGTH) ==0)
        {
            removeIf(root, taskList[i].executor, parsedCommand.argument);
            break;
        }
    }
}
*/
