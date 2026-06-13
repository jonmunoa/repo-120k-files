// fichero 39989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39989;

Registro39989 crear_registro39989(int id) {
    Registro39989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39989(Registro39989 r) {
    return r.valor + r.id;
}
