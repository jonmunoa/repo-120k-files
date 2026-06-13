// fichero 32289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32289;

Registro32289 crear_registro32289(int id) {
    Registro32289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32289(Registro32289 r) {
    return r.valor + r.id;
}
