// fichero 32053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32053;

Registro32053 crear_registro32053(int id) {
    Registro32053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32053(Registro32053 r) {
    return r.valor + r.id;
}
