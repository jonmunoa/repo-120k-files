// fichero 23009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23009;

Registro23009 crear_registro23009(int id) {
    Registro23009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23009(Registro23009 r) {
    return r.valor + r.id;
}
