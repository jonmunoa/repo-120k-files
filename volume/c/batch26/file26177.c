// fichero 26177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26177;

Registro26177 crear_registro26177(int id) {
    Registro26177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26177(Registro26177 r) {
    return r.valor + r.id;
}
