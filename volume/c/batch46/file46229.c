// fichero 46229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46229;

Registro46229 crear_registro46229(int id) {
    Registro46229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46229(Registro46229 r) {
    return r.valor + r.id;
}
