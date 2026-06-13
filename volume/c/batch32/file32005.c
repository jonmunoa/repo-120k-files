// fichero 32005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32005;

Registro32005 crear_registro32005(int id) {
    Registro32005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32005(Registro32005 r) {
    return r.valor + r.id;
}
