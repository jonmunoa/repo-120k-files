// fichero 29017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29017;

Registro29017 crear_registro29017(int id) {
    Registro29017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29017(Registro29017 r) {
    return r.valor + r.id;
}
