// fichero 1185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1185;

Registro1185 crear_registro1185(int id) {
    Registro1185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1185(Registro1185 r) {
    return r.valor + r.id;
}
