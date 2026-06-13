// fichero 23389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23389;

Registro23389 crear_registro23389(int id) {
    Registro23389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23389(Registro23389 r) {
    return r.valor + r.id;
}
