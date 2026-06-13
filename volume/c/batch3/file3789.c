// fichero 3789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3789;

Registro3789 crear_registro3789(int id) {
    Registro3789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3789(Registro3789 r) {
    return r.valor + r.id;
}
