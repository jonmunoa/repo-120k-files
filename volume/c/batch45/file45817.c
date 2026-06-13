// fichero 45817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45817;

Registro45817 crear_registro45817(int id) {
    Registro45817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45817(Registro45817 r) {
    return r.valor + r.id;
}
