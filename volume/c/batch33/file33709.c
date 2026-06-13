// fichero 33709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33709;

Registro33709 crear_registro33709(int id) {
    Registro33709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33709(Registro33709 r) {
    return r.valor + r.id;
}
