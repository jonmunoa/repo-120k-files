// fichero 49165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49165;

Registro49165 crear_registro49165(int id) {
    Registro49165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49165(Registro49165 r) {
    return r.valor + r.id;
}
