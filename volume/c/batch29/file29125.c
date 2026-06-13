// fichero 29125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29125;

Registro29125 crear_registro29125(int id) {
    Registro29125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29125(Registro29125 r) {
    return r.valor + r.id;
}
