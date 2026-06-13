// fichero 50321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50321;

Registro50321 crear_registro50321(int id) {
    Registro50321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50321(Registro50321 r) {
    return r.valor + r.id;
}
