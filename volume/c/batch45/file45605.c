// fichero 45605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45605;

Registro45605 crear_registro45605(int id) {
    Registro45605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45605(Registro45605 r) {
    return r.valor + r.id;
}
