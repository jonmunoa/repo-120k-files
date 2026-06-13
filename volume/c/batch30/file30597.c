// fichero 30597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30597;

Registro30597 crear_registro30597(int id) {
    Registro30597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30597(Registro30597 r) {
    return r.valor + r.id;
}
