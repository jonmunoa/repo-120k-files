// fichero 34989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34989;

Registro34989 crear_registro34989(int id) {
    Registro34989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34989(Registro34989 r) {
    return r.valor + r.id;
}
