// fichero 52225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52225;

Registro52225 crear_registro52225(int id) {
    Registro52225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52225(Registro52225 r) {
    return r.valor + r.id;
}
