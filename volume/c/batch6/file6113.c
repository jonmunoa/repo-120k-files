// fichero 6113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6113;

Registro6113 crear_registro6113(int id) {
    Registro6113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6113(Registro6113 r) {
    return r.valor + r.id;
}
