// fichero 813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro813;

Registro813 crear_registro813(int id) {
    Registro813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro813(Registro813 r) {
    return r.valor + r.id;
}
