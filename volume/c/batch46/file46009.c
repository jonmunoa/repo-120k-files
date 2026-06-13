// fichero 46009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46009;

Registro46009 crear_registro46009(int id) {
    Registro46009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46009(Registro46009 r) {
    return r.valor + r.id;
}
