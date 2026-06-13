// fichero 7989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7989;

Registro7989 crear_registro7989(int id) {
    Registro7989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7989(Registro7989 r) {
    return r.valor + r.id;
}
