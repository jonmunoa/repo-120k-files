// fichero 47097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47097;

Registro47097 crear_registro47097(int id) {
    Registro47097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47097(Registro47097 r) {
    return r.valor + r.id;
}
