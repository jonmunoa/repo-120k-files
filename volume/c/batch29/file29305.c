// fichero 29305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29305;

Registro29305 crear_registro29305(int id) {
    Registro29305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29305(Registro29305 r) {
    return r.valor + r.id;
}
