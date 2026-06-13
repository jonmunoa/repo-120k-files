// fichero 30125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30125;

Registro30125 crear_registro30125(int id) {
    Registro30125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30125(Registro30125 r) {
    return r.valor + r.id;
}
