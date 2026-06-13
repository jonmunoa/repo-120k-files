// fichero 48477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48477;

Registro48477 crear_registro48477(int id) {
    Registro48477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48477(Registro48477 r) {
    return r.valor + r.id;
}
