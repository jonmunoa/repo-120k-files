// fichero 2245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2245;

Registro2245 crear_registro2245(int id) {
    Registro2245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2245(Registro2245 r) {
    return r.valor + r.id;
}
