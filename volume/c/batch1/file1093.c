// fichero 1093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1093;

Registro1093 crear_registro1093(int id) {
    Registro1093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1093(Registro1093 r) {
    return r.valor + r.id;
}
