// fichero 47621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47621;

Registro47621 crear_registro47621(int id) {
    Registro47621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47621(Registro47621 r) {
    return r.valor + r.id;
}
