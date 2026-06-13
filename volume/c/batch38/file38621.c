// fichero 38621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38621;

Registro38621 crear_registro38621(int id) {
    Registro38621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38621(Registro38621 r) {
    return r.valor + r.id;
}
