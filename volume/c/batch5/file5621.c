// fichero 5621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5621;

Registro5621 crear_registro5621(int id) {
    Registro5621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5621(Registro5621 r) {
    return r.valor + r.id;
}
