// fichero 12441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12441;

Registro12441 crear_registro12441(int id) {
    Registro12441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12441(Registro12441 r) {
    return r.valor + r.id;
}
