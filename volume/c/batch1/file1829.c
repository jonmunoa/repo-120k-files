// fichero 1829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1829;

Registro1829 crear_registro1829(int id) {
    Registro1829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1829(Registro1829 r) {
    return r.valor + r.id;
}
