// fichero 26289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26289;

Registro26289 crear_registro26289(int id) {
    Registro26289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26289(Registro26289 r) {
    return r.valor + r.id;
}
