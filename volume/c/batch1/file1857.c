// fichero 1857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1857;

Registro1857 crear_registro1857(int id) {
    Registro1857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1857(Registro1857 r) {
    return r.valor + r.id;
}
