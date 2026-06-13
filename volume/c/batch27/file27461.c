// fichero 27461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27461;

Registro27461 crear_registro27461(int id) {
    Registro27461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27461(Registro27461 r) {
    return r.valor + r.id;
}
