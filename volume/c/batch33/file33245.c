// fichero 33245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33245;

Registro33245 crear_registro33245(int id) {
    Registro33245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33245(Registro33245 r) {
    return r.valor + r.id;
}
