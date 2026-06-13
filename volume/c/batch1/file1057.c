// fichero 1057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1057;

Registro1057 crear_registro1057(int id) {
    Registro1057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1057(Registro1057 r) {
    return r.valor + r.id;
}
