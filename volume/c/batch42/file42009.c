// fichero 42009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42009;

Registro42009 crear_registro42009(int id) {
    Registro42009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42009(Registro42009 r) {
    return r.valor + r.id;
}
