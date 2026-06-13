// fichero 30045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30045;

Registro30045 crear_registro30045(int id) {
    Registro30045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30045(Registro30045 r) {
    return r.valor + r.id;
}
