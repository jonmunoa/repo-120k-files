// fichero 30733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30733;

Registro30733 crear_registro30733(int id) {
    Registro30733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30733(Registro30733 r) {
    return r.valor + r.id;
}
