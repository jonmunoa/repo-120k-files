// fichero 23449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23449;

Registro23449 crear_registro23449(int id) {
    Registro23449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23449(Registro23449 r) {
    return r.valor + r.id;
}
