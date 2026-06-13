// fichero 29689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29689;

Registro29689 crear_registro29689(int id) {
    Registro29689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29689(Registro29689 r) {
    return r.valor + r.id;
}
