// fichero 45317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45317;

Registro45317 crear_registro45317(int id) {
    Registro45317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45317(Registro45317 r) {
    return r.valor + r.id;
}
