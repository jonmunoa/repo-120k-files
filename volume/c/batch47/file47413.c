// fichero 47413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47413;

Registro47413 crear_registro47413(int id) {
    Registro47413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47413(Registro47413 r) {
    return r.valor + r.id;
}
