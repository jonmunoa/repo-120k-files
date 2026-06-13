// fichero 38461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38461;

Registro38461 crear_registro38461(int id) {
    Registro38461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38461(Registro38461 r) {
    return r.valor + r.id;
}
