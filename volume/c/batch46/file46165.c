// fichero 46165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46165;

Registro46165 crear_registro46165(int id) {
    Registro46165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46165(Registro46165 r) {
    return r.valor + r.id;
}
