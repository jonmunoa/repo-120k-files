// fichero 43469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43469;

Registro43469 crear_registro43469(int id) {
    Registro43469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43469(Registro43469 r) {
    return r.valor + r.id;
}
