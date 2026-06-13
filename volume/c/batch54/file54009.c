// fichero 54009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54009;

Registro54009 crear_registro54009(int id) {
    Registro54009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54009(Registro54009 r) {
    return r.valor + r.id;
}
