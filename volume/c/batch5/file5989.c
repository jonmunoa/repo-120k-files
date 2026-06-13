// fichero 5989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5989;

Registro5989 crear_registro5989(int id) {
    Registro5989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5989(Registro5989 r) {
    return r.valor + r.id;
}
