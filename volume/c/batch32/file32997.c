// fichero 32997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32997;

Registro32997 crear_registro32997(int id) {
    Registro32997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32997(Registro32997 r) {
    return r.valor + r.id;
}
