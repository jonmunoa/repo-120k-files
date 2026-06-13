// fichero 42137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42137;

Registro42137 crear_registro42137(int id) {
    Registro42137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42137(Registro42137 r) {
    return r.valor + r.id;
}
