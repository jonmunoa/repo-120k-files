// fichero 16225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16225;

Registro16225 crear_registro16225(int id) {
    Registro16225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16225(Registro16225 r) {
    return r.valor + r.id;
}
