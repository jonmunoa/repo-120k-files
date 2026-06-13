// fichero 43229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43229;

Registro43229 crear_registro43229(int id) {
    Registro43229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43229(Registro43229 r) {
    return r.valor + r.id;
}
