// fichero 45009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45009;

Registro45009 crear_registro45009(int id) {
    Registro45009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45009(Registro45009 r) {
    return r.valor + r.id;
}
