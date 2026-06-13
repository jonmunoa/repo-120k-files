// fichero 32033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32033;

Registro32033 crear_registro32033(int id) {
    Registro32033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32033(Registro32033 r) {
    return r.valor + r.id;
}
