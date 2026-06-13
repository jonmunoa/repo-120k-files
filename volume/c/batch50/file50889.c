// fichero 50889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50889;

Registro50889 crear_registro50889(int id) {
    Registro50889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50889(Registro50889 r) {
    return r.valor + r.id;
}
