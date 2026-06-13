// fichero 52037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52037;

Registro52037 crear_registro52037(int id) {
    Registro52037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52037(Registro52037 r) {
    return r.valor + r.id;
}
