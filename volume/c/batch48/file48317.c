// fichero 48317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48317;

Registro48317 crear_registro48317(int id) {
    Registro48317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48317(Registro48317 r) {
    return r.valor + r.id;
}
