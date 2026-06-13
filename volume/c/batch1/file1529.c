// fichero 1529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1529;

Registro1529 crear_registro1529(int id) {
    Registro1529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1529(Registro1529 r) {
    return r.valor + r.id;
}
