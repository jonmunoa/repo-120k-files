// fichero 18009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18009;

Registro18009 crear_registro18009(int id) {
    Registro18009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18009(Registro18009 r) {
    return r.valor + r.id;
}
