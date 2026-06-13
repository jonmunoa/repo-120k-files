// fichero 4621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4621;

Registro4621 crear_registro4621(int id) {
    Registro4621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4621(Registro4621 r) {
    return r.valor + r.id;
}
