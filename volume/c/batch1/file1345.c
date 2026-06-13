// fichero 1345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1345;

Registro1345 crear_registro1345(int id) {
    Registro1345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1345(Registro1345 r) {
    return r.valor + r.id;
}
