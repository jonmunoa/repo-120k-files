// fichero 43857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43857;

Registro43857 crear_registro43857(int id) {
    Registro43857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43857(Registro43857 r) {
    return r.valor + r.id;
}
