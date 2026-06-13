// fichero 29581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29581;

Registro29581 crear_registro29581(int id) {
    Registro29581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29581(Registro29581 r) {
    return r.valor + r.id;
}
