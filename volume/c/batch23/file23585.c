// fichero 23585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23585;

Registro23585 crear_registro23585(int id) {
    Registro23585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23585(Registro23585 r) {
    return r.valor + r.id;
}
