// fichero 29097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29097;

Registro29097 crear_registro29097(int id) {
    Registro29097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29097(Registro29097 r) {
    return r.valor + r.id;
}
