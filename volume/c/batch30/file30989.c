// fichero 30989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30989;

Registro30989 crear_registro30989(int id) {
    Registro30989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30989(Registro30989 r) {
    return r.valor + r.id;
}
