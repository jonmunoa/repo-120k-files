// fichero 37137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37137;

Registro37137 crear_registro37137(int id) {
    Registro37137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37137(Registro37137 r) {
    return r.valor + r.id;
}
