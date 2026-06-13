// fichero 14761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14761;

Registro14761 crear_registro14761(int id) {
    Registro14761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14761(Registro14761 r) {
    return r.valor + r.id;
}
