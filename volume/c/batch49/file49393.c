// fichero 49393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49393;

Registro49393 crear_registro49393(int id) {
    Registro49393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49393(Registro49393 r) {
    return r.valor + r.id;
}
