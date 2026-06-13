// fichero 14877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14877;

Registro14877 crear_registro14877(int id) {
    Registro14877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14877(Registro14877 r) {
    return r.valor + r.id;
}
