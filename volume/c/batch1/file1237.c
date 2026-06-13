// fichero 1237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1237;

Registro1237 crear_registro1237(int id) {
    Registro1237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1237(Registro1237 r) {
    return r.valor + r.id;
}
