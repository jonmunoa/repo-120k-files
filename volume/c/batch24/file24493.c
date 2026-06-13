// fichero 24493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24493;

Registro24493 crear_registro24493(int id) {
    Registro24493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24493(Registro24493 r) {
    return r.valor + r.id;
}
