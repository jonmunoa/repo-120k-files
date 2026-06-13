// fichero 23493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23493;

Registro23493 crear_registro23493(int id) {
    Registro23493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23493(Registro23493 r) {
    return r.valor + r.id;
}
