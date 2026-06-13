// fichero 16977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16977;

Registro16977 crear_registro16977(int id) {
    Registro16977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16977(Registro16977 r) {
    return r.valor + r.id;
}
