// fichero 45225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45225;

Registro45225 crear_registro45225(int id) {
    Registro45225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45225(Registro45225 r) {
    return r.valor + r.id;
}
