// fichero 6289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6289;

Registro6289 crear_registro6289(int id) {
    Registro6289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6289(Registro6289 r) {
    return r.valor + r.id;
}
