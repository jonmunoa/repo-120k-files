// fichero 20621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20621;

Registro20621 crear_registro20621(int id) {
    Registro20621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20621(Registro20621 r) {
    return r.valor + r.id;
}
