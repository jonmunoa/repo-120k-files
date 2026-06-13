// fichero 29465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29465;

Registro29465 crear_registro29465(int id) {
    Registro29465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29465(Registro29465 r) {
    return r.valor + r.id;
}
