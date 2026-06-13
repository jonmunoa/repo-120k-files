// fichero 33377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33377;

Registro33377 crear_registro33377(int id) {
    Registro33377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33377(Registro33377 r) {
    return r.valor + r.id;
}
