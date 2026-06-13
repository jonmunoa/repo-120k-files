// fichero 30357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30357;

Registro30357 crear_registro30357(int id) {
    Registro30357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30357(Registro30357 r) {
    return r.valor + r.id;
}
