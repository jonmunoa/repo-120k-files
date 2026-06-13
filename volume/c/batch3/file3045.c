// fichero 3045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3045;

Registro3045 crear_registro3045(int id) {
    Registro3045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3045(Registro3045 r) {
    return r.valor + r.id;
}
