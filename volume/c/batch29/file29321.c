// fichero 29321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29321;

Registro29321 crear_registro29321(int id) {
    Registro29321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29321(Registro29321 r) {
    return r.valor + r.id;
}
