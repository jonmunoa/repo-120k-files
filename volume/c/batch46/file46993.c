// fichero 46993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46993;

Registro46993 crear_registro46993(int id) {
    Registro46993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46993(Registro46993 r) {
    return r.valor + r.id;
}
