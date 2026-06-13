// fichero 1245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1245;

Registro1245 crear_registro1245(int id) {
    Registro1245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1245(Registro1245 r) {
    return r.valor + r.id;
}
