// fichero 461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro461;

Registro461 crear_registro461(int id) {
    Registro461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro461(Registro461 r) {
    return r.valor + r.id;
}
