// fichero 52585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52585;

Registro52585 crear_registro52585(int id) {
    Registro52585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52585(Registro52585 r) {
    return r.valor + r.id;
}
