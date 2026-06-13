// fichero 14081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14081;

Registro14081 crear_registro14081(int id) {
    Registro14081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14081(Registro14081 r) {
    return r.valor + r.id;
}
