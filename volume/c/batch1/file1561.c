// fichero 1561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1561;

Registro1561 crear_registro1561(int id) {
    Registro1561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1561(Registro1561 r) {
    return r.valor + r.id;
}
