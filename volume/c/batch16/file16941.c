// fichero 16941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16941;

Registro16941 crear_registro16941(int id) {
    Registro16941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16941(Registro16941 r) {
    return r.valor + r.id;
}
