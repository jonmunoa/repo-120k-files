// fichero 45145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45145;

Registro45145 crear_registro45145(int id) {
    Registro45145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45145(Registro45145 r) {
    return r.valor + r.id;
}
