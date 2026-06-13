// fichero 28521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28521;

Registro28521 crear_registro28521(int id) {
    Registro28521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28521(Registro28521 r) {
    return r.valor + r.id;
}
