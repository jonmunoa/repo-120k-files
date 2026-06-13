// fichero 33229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33229;

Registro33229 crear_registro33229(int id) {
    Registro33229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33229(Registro33229 r) {
    return r.valor + r.id;
}
