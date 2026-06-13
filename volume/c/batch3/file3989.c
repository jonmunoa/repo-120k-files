// fichero 3989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3989;

Registro3989 crear_registro3989(int id) {
    Registro3989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3989(Registro3989 r) {
    return r.valor + r.id;
}
