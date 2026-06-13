// fichero 16093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16093;

Registro16093 crear_registro16093(int id) {
    Registro16093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16093(Registro16093 r) {
    return r.valor + r.id;
}
