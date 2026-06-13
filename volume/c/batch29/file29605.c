// fichero 29605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29605;

Registro29605 crear_registro29605(int id) {
    Registro29605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29605(Registro29605 r) {
    return r.valor + r.id;
}
