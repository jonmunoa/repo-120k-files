// fichero 1613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1613;

Registro1613 crear_registro1613(int id) {
    Registro1613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1613(Registro1613 r) {
    return r.valor + r.id;
}
