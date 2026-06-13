// fichero 20009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20009;

Registro20009 crear_registro20009(int id) {
    Registro20009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20009(Registro20009 r) {
    return r.valor + r.id;
}
