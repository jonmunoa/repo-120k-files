// fichero 16937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16937;

Registro16937 crear_registro16937(int id) {
    Registro16937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16937(Registro16937 r) {
    return r.valor + r.id;
}
