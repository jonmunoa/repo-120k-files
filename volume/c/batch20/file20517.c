// fichero 20517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20517;

Registro20517 crear_registro20517(int id) {
    Registro20517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20517(Registro20517 r) {
    return r.valor + r.id;
}
