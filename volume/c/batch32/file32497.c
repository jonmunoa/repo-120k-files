// fichero 32497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32497;

Registro32497 crear_registro32497(int id) {
    Registro32497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32497(Registro32497 r) {
    return r.valor + r.id;
}
