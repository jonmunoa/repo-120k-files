// fichero 14593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14593;

Registro14593 crear_registro14593(int id) {
    Registro14593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14593(Registro14593 r) {
    return r.valor + r.id;
}
