// fichero 35989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35989;

Registro35989 crear_registro35989(int id) {
    Registro35989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35989(Registro35989 r) {
    return r.valor + r.id;
}
