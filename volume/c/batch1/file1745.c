// fichero 1745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1745;

Registro1745 crear_registro1745(int id) {
    Registro1745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1745(Registro1745 r) {
    return r.valor + r.id;
}
