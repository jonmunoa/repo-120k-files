// fichero 33009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33009;

Registro33009 crear_registro33009(int id) {
    Registro33009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33009(Registro33009 r) {
    return r.valor + r.id;
}
