// fichero 14137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14137;

Registro14137 crear_registro14137(int id) {
    Registro14137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14137(Registro14137 r) {
    return r.valor + r.id;
}
