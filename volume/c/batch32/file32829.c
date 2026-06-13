// fichero 32829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32829;

Registro32829 crear_registro32829(int id) {
    Registro32829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32829(Registro32829 r) {
    return r.valor + r.id;
}
