// fichero 9337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9337;

Registro9337 crear_registro9337(int id) {
    Registro9337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9337(Registro9337 r) {
    return r.valor + r.id;
}
