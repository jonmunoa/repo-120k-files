// fichero 30845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30845;

Registro30845 crear_registro30845(int id) {
    Registro30845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30845(Registro30845 r) {
    return r.valor + r.id;
}
