// fichero 1505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1505;

Registro1505 crear_registro1505(int id) {
    Registro1505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1505(Registro1505 r) {
    return r.valor + r.id;
}
