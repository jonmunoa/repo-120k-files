// fichero 1665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1665;

Registro1665 crear_registro1665(int id) {
    Registro1665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1665(Registro1665 r) {
    return r.valor + r.id;
}
