// fichero 23517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23517;

Registro23517 crear_registro23517(int id) {
    Registro23517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23517(Registro23517 r) {
    return r.valor + r.id;
}
