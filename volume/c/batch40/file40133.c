// fichero 40133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40133;

Registro40133 crear_registro40133(int id) {
    Registro40133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40133(Registro40133 r) {
    return r.valor + r.id;
}
