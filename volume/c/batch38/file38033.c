// fichero 38033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38033;

Registro38033 crear_registro38033(int id) {
    Registro38033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38033(Registro38033 r) {
    return r.valor + r.id;
}
