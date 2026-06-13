// fichero 42213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42213;

Registro42213 crear_registro42213(int id) {
    Registro42213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42213(Registro42213 r) {
    return r.valor + r.id;
}
