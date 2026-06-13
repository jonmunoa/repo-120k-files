// fichero 1269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1269;

Registro1269 crear_registro1269(int id) {
    Registro1269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1269(Registro1269 r) {
    return r.valor + r.id;
}
