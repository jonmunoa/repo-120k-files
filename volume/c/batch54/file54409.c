// fichero 54409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54409;

Registro54409 crear_registro54409(int id) {
    Registro54409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54409(Registro54409 r) {
    return r.valor + r.id;
}
