// fichero 6461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6461;

Registro6461 crear_registro6461(int id) {
    Registro6461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6461(Registro6461 r) {
    return r.valor + r.id;
}
