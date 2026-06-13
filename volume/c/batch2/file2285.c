// fichero 2285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2285;

Registro2285 crear_registro2285(int id) {
    Registro2285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2285(Registro2285 r) {
    return r.valor + r.id;
}
