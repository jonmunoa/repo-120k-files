// fichero 29517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29517;

Registro29517 crear_registro29517(int id) {
    Registro29517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29517(Registro29517 r) {
    return r.valor + r.id;
}
