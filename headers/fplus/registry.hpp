#include <unordered_map>
#include <stdint.h>

struct registry
{
    std::unordered_map<uint64_t, void *> symbolTable;
};

extern registry reg;

enum dataType
{
    I64, U64, I32, U32, I16, U16, I8, U8, QCHAR, DCHAR, WCHAR, CHAR, FUNC
};

enum funcType
{
    native, scripted
};

// Used to store varibales
struct var
{
    dataType type;
    void* value;
};

struct func
{
    funcType type;
    dataType ret;
    void* code; // If native pointer to function. If scripted pointer (in vm memory) to bytecode.
};