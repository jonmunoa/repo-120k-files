// fichero 1805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1805;

Registro1805 crear_registro1805(int id) {
    Registro1805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1805(Registro1805 r) {
    return r.valor + r.id;
}
