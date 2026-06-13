// fichero 45829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45829;

Registro45829 crear_registro45829(int id) {
    Registro45829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45829(Registro45829 r) {
    return r.valor + r.id;
}
