// fichero 32117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32117;

Registro32117 crear_registro32117(int id) {
    Registro32117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32117(Registro32117 r) {
    return r.valor + r.id;
}
