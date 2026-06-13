// fichero 45565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45565;

Registro45565 crear_registro45565(int id) {
    Registro45565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45565(Registro45565 r) {
    return r.valor + r.id;
}
