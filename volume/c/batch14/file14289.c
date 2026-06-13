// fichero 14289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14289;

Registro14289 crear_registro14289(int id) {
    Registro14289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14289(Registro14289 r) {
    return r.valor + r.id;
}
