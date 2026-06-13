// fichero 1553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1553;

Registro1553 crear_registro1553(int id) {
    Registro1553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1553(Registro1553 r) {
    return r.valor + r.id;
}
