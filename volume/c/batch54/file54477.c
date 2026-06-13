// fichero 54477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54477;

Registro54477 crear_registro54477(int id) {
    Registro54477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54477(Registro54477 r) {
    return r.valor + r.id;
}
