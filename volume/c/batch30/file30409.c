// fichero 30409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30409;

Registro30409 crear_registro30409(int id) {
    Registro30409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30409(Registro30409 r) {
    return r.valor + r.id;
}
