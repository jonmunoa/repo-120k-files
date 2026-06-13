// fichero 52989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52989;

Registro52989 crear_registro52989(int id) {
    Registro52989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52989(Registro52989 r) {
    return r.valor + r.id;
}
