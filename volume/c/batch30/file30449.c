// fichero 30449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30449;

Registro30449 crear_registro30449(int id) {
    Registro30449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30449(Registro30449 r) {
    return r.valor + r.id;
}
