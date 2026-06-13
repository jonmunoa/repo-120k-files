// fichero 14281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14281;

Registro14281 crear_registro14281(int id) {
    Registro14281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14281(Registro14281 r) {
    return r.valor + r.id;
}
