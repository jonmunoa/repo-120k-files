// fichero 47469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47469;

Registro47469 crear_registro47469(int id) {
    Registro47469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47469(Registro47469 r) {
    return r.valor + r.id;
}
