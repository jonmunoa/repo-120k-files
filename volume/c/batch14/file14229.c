// fichero 14229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14229;

Registro14229 crear_registro14229(int id) {
    Registro14229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14229(Registro14229 r) {
    return r.valor + r.id;
}
