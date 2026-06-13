// fichero 889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro889;

Registro889 crear_registro889(int id) {
    Registro889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro889(Registro889 r) {
    return r.valor + r.id;
}
