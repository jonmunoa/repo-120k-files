// fichero 37009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37009;

Registro37009 crear_registro37009(int id) {
    Registro37009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37009(Registro37009 r) {
    return r.valor + r.id;
}
