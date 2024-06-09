#pragma once

#include <iostream>
#include <unordered_map>
#include <sstream>

const std::unordered_map<char, std::string> g_MorseCodeMap =
{
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'a', "^.-"}, {'b', "^-..."}, {'c', "^-.-."}, {'d', "^-.."},
    {'e', "^."}, {'f', "^..-."}, {'g', "^--."}, {'h', "^...."},
    {'i', "^.."}, {'j', "^.---"}, {'k', "^-.-"}, {'l', "^.-.."},
    {'m', "^--"}, {'n', "^-."}, {'o', "^---"}, {'p', "^.--."},
    {'q', "^--.-"}, {'r', "^.-."}, {'s', "^..."}, {'t', "^-"},
    {'u', "^..-"}, {'v', "^...-"}, {'w', "^.--"}, {'x', "^-..-"},
    {'y', "^-.--"}, {'z', "^--.."},
    {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
    {'9', "----."}, {'0', "-----"}, {' ', "/"}
};

std::string EncodePlaintextToMorseCode(const std::string& arg_input);