// fichero 19461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19461;

Registro19461 crear_registro19461(int id) {
    Registro19461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19461(Registro19461 r) {
    return r.valor + r.id;
}
