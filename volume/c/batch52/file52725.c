// fichero 52725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52725;

Registro52725 crear_registro52725(int id) {
    Registro52725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52725(Registro52725 r) {
    return r.valor + r.id;
}
