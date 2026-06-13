// fichero 33761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33761;

Registro33761 crear_registro33761(int id) {
    Registro33761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33761(Registro33761 r) {
    return r.valor + r.id;
}
