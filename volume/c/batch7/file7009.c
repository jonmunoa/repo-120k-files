// fichero 7009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7009;

Registro7009 crear_registro7009(int id) {
    Registro7009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7009(Registro7009 r) {
    return r.valor + r.id;
}
