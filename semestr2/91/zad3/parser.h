//
// Created by scisl on 09.05.2021.
//

#ifndef CLION_PARSER_H
#define CLION_PARSER_H

#endif //CLION_PARSER_H
#pragma once

#define MAX_INSTRUCTION_LENGTH 12

typedef struct ParsedCommand {
    char instruction[MAX_INSTRUCTION_LENGTH];
    int argument;
} ParsedCommand_t;

ParsedCommand_t parseCommand(const char * command);
