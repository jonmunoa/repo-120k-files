// fichero 46613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46613;

Registro46613 crear_registro46613(int id) {
    Registro46613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46613(Registro46613 r) {
    return r.valor + r.id;
}
