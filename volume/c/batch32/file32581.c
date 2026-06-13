// fichero 32581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32581;

Registro32581 crear_registro32581(int id) {
    Registro32581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32581(Registro32581 r) {
    return r.valor + r.id;
}
