// fichero 29989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29989;

Registro29989 crear_registro29989(int id) {
    Registro29989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29989(Registro29989 r) {
    return r.valor + r.id;
}
