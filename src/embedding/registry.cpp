#include <map>
#include <fplus/registry.hpp>

registry reg;

void* getSymbol(uint64_t symbol)
{
    return reg.symbolTable[symbol];
}

void registerSymbol(uint64_t name_fnv1a, void* ptr)
{
    reg.symbolTable[name_fnv1a] = ptr;
}