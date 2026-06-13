// fichero 35441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35441;

Registro35441 crear_registro35441(int id) {
    Registro35441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35441(Registro35441 r) {
    return r.valor + r.id;
}
