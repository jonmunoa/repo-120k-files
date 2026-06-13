// fichero 16761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16761;

Registro16761 crear_registro16761(int id) {
    Registro16761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16761(Registro16761 r) {
    return r.valor + r.id;
}
