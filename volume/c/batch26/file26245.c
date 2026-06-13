// fichero 26245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26245;

Registro26245 crear_registro26245(int id) {
    Registro26245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26245(Registro26245 r) {
    return r.valor + r.id;
}
