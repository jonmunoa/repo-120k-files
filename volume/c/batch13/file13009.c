// fichero 13009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13009;

Registro13009 crear_registro13009(int id) {
    Registro13009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13009(Registro13009 r) {
    return r.valor + r.id;
}
