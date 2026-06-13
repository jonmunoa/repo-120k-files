// fichero 28009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28009;

Registro28009 crear_registro28009(int id) {
    Registro28009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28009(Registro28009 r) {
    return r.valor + r.id;
}
