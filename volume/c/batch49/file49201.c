// fichero 49201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49201;

Registro49201 crear_registro49201(int id) {
    Registro49201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49201(Registro49201 r) {
    return r.valor + r.id;
}
