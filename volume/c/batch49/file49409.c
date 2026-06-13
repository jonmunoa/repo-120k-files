// fichero 49409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49409;

Registro49409 crear_registro49409(int id) {
    Registro49409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49409(Registro49409 r) {
    return r.valor + r.id;
}
