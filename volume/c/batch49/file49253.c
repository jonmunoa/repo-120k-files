// fichero 49253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49253;

Registro49253 crear_registro49253(int id) {
    Registro49253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49253(Registro49253 r) {
    return r.valor + r.id;
}
