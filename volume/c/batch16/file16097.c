// fichero 16097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16097;

Registro16097 crear_registro16097(int id) {
    Registro16097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16097(Registro16097 r) {
    return r.valor + r.id;
}
