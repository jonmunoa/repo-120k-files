// fichero 821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro821;

Registro821 crear_registro821(int id) {
    Registro821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro821(Registro821 r) {
    return r.valor + r.id;
}
