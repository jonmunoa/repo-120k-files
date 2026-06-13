// fichero 48289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48289;

Registro48289 crear_registro48289(int id) {
    Registro48289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48289(Registro48289 r) {
    return r.valor + r.id;
}
