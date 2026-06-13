// fichero 1653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1653;

Registro1653 crear_registro1653(int id) {
    Registro1653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1653(Registro1653 r) {
    return r.valor + r.id;
}
