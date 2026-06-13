// fichero 1641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1641;

Registro1641 crear_registro1641(int id) {
    Registro1641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1641(Registro1641 r) {
    return r.valor + r.id;
}
