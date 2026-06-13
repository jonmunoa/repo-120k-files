// fichero 22009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22009;

Registro22009 crear_registro22009(int id) {
    Registro22009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22009(Registro22009 r) {
    return r.valor + r.id;
}
