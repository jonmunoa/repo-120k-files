// fichero 1825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1825;

Registro1825 crear_registro1825(int id) {
    Registro1825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1825(Registro1825 r) {
    return r.valor + r.id;
}
