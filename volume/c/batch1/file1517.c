// fichero 1517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1517;

Registro1517 crear_registro1517(int id) {
    Registro1517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1517(Registro1517 r) {
    return r.valor + r.id;
}
