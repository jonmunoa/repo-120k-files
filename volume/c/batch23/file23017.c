// fichero 23017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23017;

Registro23017 crear_registro23017(int id) {
    Registro23017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23017(Registro23017 r) {
    return r.valor + r.id;
}
