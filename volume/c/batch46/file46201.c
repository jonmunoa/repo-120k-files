// fichero 46201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46201;

Registro46201 crear_registro46201(int id) {
    Registro46201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46201(Registro46201 r) {
    return r.valor + r.id;
}
