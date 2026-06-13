// fichero 4913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4913;

Registro4913 crear_registro4913(int id) {
    Registro4913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4913(Registro4913 r) {
    return r.valor + r.id;
}
