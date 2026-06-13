// fichero 30189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30189;

Registro30189 crear_registro30189(int id) {
    Registro30189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30189(Registro30189 r) {
    return r.valor + r.id;
}
