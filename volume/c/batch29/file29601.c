// fichero 29601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29601;

Registro29601 crear_registro29601(int id) {
    Registro29601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29601(Registro29601 r) {
    return r.valor + r.id;
}
