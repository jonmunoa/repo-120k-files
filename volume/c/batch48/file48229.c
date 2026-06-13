// fichero 48229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48229;

Registro48229 crear_registro48229(int id) {
    Registro48229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48229(Registro48229 r) {
    return r.valor + r.id;
}
