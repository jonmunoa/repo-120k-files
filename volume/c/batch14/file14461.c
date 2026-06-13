// fichero 14461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14461;

Registro14461 crear_registro14461(int id) {
    Registro14461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14461(Registro14461 r) {
    return r.valor + r.id;
}
