// fichero 15305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15305;

Registro15305 crear_registro15305(int id) {
    Registro15305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15305(Registro15305 r) {
    return r.valor + r.id;
}
