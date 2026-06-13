// fichero 1789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1789;

Registro1789 crear_registro1789(int id) {
    Registro1789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1789(Registro1789 r) {
    return r.valor + r.id;
}
