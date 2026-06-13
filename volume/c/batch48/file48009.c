// fichero 48009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48009;

Registro48009 crear_registro48009(int id) {
    Registro48009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48009(Registro48009 r) {
    return r.valor + r.id;
}
