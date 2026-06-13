// fichero 49217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49217;

Registro49217 crear_registro49217(int id) {
    Registro49217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49217(Registro49217 r) {
    return r.valor + r.id;
}
