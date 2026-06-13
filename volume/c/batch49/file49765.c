// fichero 49765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49765;

Registro49765 crear_registro49765(int id) {
    Registro49765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49765(Registro49765 r) {
    return r.valor + r.id;
}
