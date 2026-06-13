// fichero 10441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10441;

Registro10441 crear_registro10441(int id) {
    Registro10441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10441(Registro10441 r) {
    return r.valor + r.id;
}
