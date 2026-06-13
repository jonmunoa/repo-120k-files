// fichero 1973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1973;

Registro1973 crear_registro1973(int id) {
    Registro1973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1973(Registro1973 r) {
    return r.valor + r.id;
}
