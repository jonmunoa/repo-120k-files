// fichero 54289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54289;

Registro54289 crear_registro54289(int id) {
    Registro54289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54289(Registro54289 r) {
    return r.valor + r.id;
}
