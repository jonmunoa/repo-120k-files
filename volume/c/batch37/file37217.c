// fichero 37217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37217;

Registro37217 crear_registro37217(int id) {
    Registro37217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37217(Registro37217 r) {
    return r.valor + r.id;
}
