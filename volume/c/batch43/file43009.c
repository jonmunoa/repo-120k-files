// fichero 43009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43009;

Registro43009 crear_registro43009(int id) {
    Registro43009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43009(Registro43009 r) {
    return r.valor + r.id;
}
