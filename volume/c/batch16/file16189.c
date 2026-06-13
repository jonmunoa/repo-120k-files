// fichero 16189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16189;

Registro16189 crear_registro16189(int id) {
    Registro16189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16189(Registro16189 r) {
    return r.valor + r.id;
}
