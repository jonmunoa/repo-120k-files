// fichero 49285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49285;

Registro49285 crear_registro49285(int id) {
    Registro49285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49285(Registro49285 r) {
    return r.valor + r.id;
}
