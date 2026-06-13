// fichero 43317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43317;

Registro43317 crear_registro43317(int id) {
    Registro43317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43317(Registro43317 r) {
    return r.valor + r.id;
}
