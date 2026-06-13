// fichero 43677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43677;

Registro43677 crear_registro43677(int id) {
    Registro43677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43677(Registro43677 r) {
    return r.valor + r.id;
}
