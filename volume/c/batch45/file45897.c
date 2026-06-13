// fichero 45897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45897;

Registro45897 crear_registro45897(int id) {
    Registro45897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45897(Registro45897 r) {
    return r.valor + r.id;
}
