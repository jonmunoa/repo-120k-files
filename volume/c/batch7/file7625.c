// fichero 7625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7625;

Registro7625 crear_registro7625(int id) {
    Registro7625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7625(Registro7625 r) {
    return r.valor + r.id;
}
