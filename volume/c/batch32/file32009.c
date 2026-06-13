// fichero 32009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32009;

Registro32009 crear_registro32009(int id) {
    Registro32009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32009(Registro32009 r) {
    return r.valor + r.id;
}
