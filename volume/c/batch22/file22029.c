// fichero 22029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22029;

Registro22029 crear_registro22029(int id) {
    Registro22029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22029(Registro22029 r) {
    return r.valor + r.id;
}
