// fichero 30433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30433;

Registro30433 crear_registro30433(int id) {
    Registro30433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30433(Registro30433 r) {
    return r.valor + r.id;
}
