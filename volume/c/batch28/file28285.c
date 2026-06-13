// fichero 28285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28285;

Registro28285 crear_registro28285(int id) {
    Registro28285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28285(Registro28285 r) {
    return r.valor + r.id;
}
