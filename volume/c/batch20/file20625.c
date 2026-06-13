// fichero 20625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20625;

Registro20625 crear_registro20625(int id) {
    Registro20625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20625(Registro20625 r) {
    return r.valor + r.id;
}
