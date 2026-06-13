// fichero 41165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41165;

Registro41165 crear_registro41165(int id) {
    Registro41165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41165(Registro41165 r) {
    return r.valor + r.id;
}
