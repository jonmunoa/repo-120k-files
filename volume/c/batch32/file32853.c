// fichero 32853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32853;

Registro32853 crear_registro32853(int id) {
    Registro32853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32853(Registro32853 r) {
    return r.valor + r.id;
}
