// fichero 41033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41033;

Registro41033 crear_registro41033(int id) {
    Registro41033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41033(Registro41033 r) {
    return r.valor + r.id;
}
