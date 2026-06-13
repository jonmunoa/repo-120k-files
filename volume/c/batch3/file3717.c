// fichero 3717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3717;

Registro3717 crear_registro3717(int id) {
    Registro3717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3717(Registro3717 r) {
    return r.valor + r.id;
}
