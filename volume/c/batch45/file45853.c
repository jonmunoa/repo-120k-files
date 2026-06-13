// fichero 45853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45853;

Registro45853 crear_registro45853(int id) {
    Registro45853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45853(Registro45853 r) {
    return r.valor + r.id;
}
