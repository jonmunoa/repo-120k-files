// fichero 45 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45;

Registro45 crear_registro45(int id) {
    Registro45 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45(Registro45 r) {
    return r.valor + r.id;
}
