// fichero 3589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3589;

Registro3589 crear_registro3589(int id) {
    Registro3589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3589(Registro3589 r) {
    return r.valor + r.id;
}
