// fichero 1305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1305;

Registro1305 crear_registro1305(int id) {
    Registro1305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1305(Registro1305 r) {
    return r.valor + r.id;
}
