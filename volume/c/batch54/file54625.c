// fichero 54625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54625;

Registro54625 crear_registro54625(int id) {
    Registro54625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54625(Registro54625 r) {
    return r.valor + r.id;
}
