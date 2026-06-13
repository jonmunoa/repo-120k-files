// fichero 14009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14009;

Registro14009 crear_registro14009(int id) {
    Registro14009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14009(Registro14009 r) {
    return r.valor + r.id;
}
