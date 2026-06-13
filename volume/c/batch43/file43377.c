// fichero 43377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43377;

Registro43377 crear_registro43377(int id) {
    Registro43377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43377(Registro43377 r) {
    return r.valor + r.id;
}
