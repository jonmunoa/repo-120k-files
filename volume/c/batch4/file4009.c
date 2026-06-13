// fichero 4009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4009;

Registro4009 crear_registro4009(int id) {
    Registro4009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4009(Registro4009 r) {
    return r.valor + r.id;
}
