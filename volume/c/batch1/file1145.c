// fichero 1145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1145;

Registro1145 crear_registro1145(int id) {
    Registro1145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1145(Registro1145 r) {
    return r.valor + r.id;
}
