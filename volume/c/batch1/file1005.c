// fichero 1005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1005;

Registro1005 crear_registro1005(int id) {
    Registro1005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1005(Registro1005 r) {
    return r.valor + r.id;
}
