// fichero 16177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16177;

Registro16177 crear_registro16177(int id) {
    Registro16177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16177(Registro16177 r) {
    return r.valor + r.id;
}
