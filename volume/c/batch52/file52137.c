// fichero 52137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52137;

Registro52137 crear_registro52137(int id) {
    Registro52137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52137(Registro52137 r) {
    return r.valor + r.id;
}
