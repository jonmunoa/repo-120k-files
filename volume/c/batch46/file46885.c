// fichero 46885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46885;

Registro46885 crear_registro46885(int id) {
    Registro46885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46885(Registro46885 r) {
    return r.valor + r.id;
}
