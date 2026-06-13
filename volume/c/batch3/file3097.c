// fichero 3097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3097;

Registro3097 crear_registro3097(int id) {
    Registro3097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3097(Registro3097 r) {
    return r.valor + r.id;
}
