// fichero 31461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31461;

Registro31461 crear_registro31461(int id) {
    Registro31461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31461(Registro31461 r) {
    return r.valor + r.id;
}
