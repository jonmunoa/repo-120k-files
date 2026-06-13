// fichero 54425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54425;

Registro54425 crear_registro54425(int id) {
    Registro54425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54425(Registro54425 r) {
    return r.valor + r.id;
}
