// fichero 43685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43685;

Registro43685 crear_registro43685(int id) {
    Registro43685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43685(Registro43685 r) {
    return r.valor + r.id;
}
