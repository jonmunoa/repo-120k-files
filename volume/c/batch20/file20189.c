// fichero 20189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20189;

Registro20189 crear_registro20189(int id) {
    Registro20189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20189(Registro20189 r) {
    return r.valor + r.id;
}
