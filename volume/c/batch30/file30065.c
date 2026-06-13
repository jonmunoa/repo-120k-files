// fichero 30065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30065;

Registro30065 crear_registro30065(int id) {
    Registro30065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30065(Registro30065 r) {
    return r.valor + r.id;
}
