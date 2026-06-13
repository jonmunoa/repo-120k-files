// fichero 33053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33053;

Registro33053 crear_registro33053(int id) {
    Registro33053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33053(Registro33053 r) {
    return r.valor + r.id;
}
