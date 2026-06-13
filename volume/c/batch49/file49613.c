// fichero 49613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49613;

Registro49613 crear_registro49613(int id) {
    Registro49613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49613(Registro49613 r) {
    return r.valor + r.id;
}
