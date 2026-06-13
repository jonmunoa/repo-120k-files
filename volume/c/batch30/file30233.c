// fichero 30233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30233;

Registro30233 crear_registro30233(int id) {
    Registro30233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30233(Registro30233 r) {
    return r.valor + r.id;
}
