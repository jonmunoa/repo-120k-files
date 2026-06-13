// fichero 15285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15285;

Registro15285 crear_registro15285(int id) {
    Registro15285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15285(Registro15285 r) {
    return r.valor + r.id;
}
