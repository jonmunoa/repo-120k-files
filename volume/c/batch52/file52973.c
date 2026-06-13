// fichero 52973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52973;

Registro52973 crear_registro52973(int id) {
    Registro52973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52973(Registro52973 r) {
    return r.valor + r.id;
}
