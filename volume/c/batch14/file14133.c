// fichero 14133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14133;

Registro14133 crear_registro14133(int id) {
    Registro14133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14133(Registro14133 r) {
    return r.valor + r.id;
}
