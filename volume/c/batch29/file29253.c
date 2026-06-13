// fichero 29253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29253;

Registro29253 crear_registro29253(int id) {
    Registro29253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29253(Registro29253 r) {
    return r.valor + r.id;
}
