// fichero 46393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46393;

Registro46393 crear_registro46393(int id) {
    Registro46393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46393(Registro46393 r) {
    return r.valor + r.id;
}
