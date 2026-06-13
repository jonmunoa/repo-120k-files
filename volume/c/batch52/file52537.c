// fichero 52537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52537;

Registro52537 crear_registro52537(int id) {
    Registro52537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52537(Registro52537 r) {
    return r.valor + r.id;
}
