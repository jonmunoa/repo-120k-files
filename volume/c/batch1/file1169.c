// fichero 1169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1169;

Registro1169 crear_registro1169(int id) {
    Registro1169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1169(Registro1169 r) {
    return r.valor + r.id;
}
