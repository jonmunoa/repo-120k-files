// fichero 46289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46289;

Registro46289 crear_registro46289(int id) {
    Registro46289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46289(Registro46289 r) {
    return r.valor + r.id;
}
