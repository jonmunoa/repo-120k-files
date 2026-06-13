// fichero 16905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16905;

Registro16905 crear_registro16905(int id) {
    Registro16905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16905(Registro16905 r) {
    return r.valor + r.id;
}
