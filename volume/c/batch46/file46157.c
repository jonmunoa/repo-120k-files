// fichero 46157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46157;

Registro46157 crear_registro46157(int id) {
    Registro46157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46157(Registro46157 r) {
    return r.valor + r.id;
}
