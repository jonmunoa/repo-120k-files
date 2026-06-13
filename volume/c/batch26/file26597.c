// fichero 26597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26597;

Registro26597 crear_registro26597(int id) {
    Registro26597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26597(Registro26597 r) {
    return r.valor + r.id;
}
