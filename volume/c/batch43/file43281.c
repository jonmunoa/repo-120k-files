// fichero 43281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43281;

Registro43281 crear_registro43281(int id) {
    Registro43281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43281(Registro43281 r) {
    return r.valor + r.id;
}
