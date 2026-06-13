// fichero 6009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6009;

Registro6009 crear_registro6009(int id) {
    Registro6009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6009(Registro6009 r) {
    return r.valor + r.id;
}
