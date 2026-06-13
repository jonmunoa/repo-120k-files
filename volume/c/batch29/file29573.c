// fichero 29573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29573;

Registro29573 crear_registro29573(int id) {
    Registro29573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29573(Registro29573 r) {
    return r.valor + r.id;
}
