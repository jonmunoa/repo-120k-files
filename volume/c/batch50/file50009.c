// fichero 50009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50009;

Registro50009 crear_registro50009(int id) {
    Registro50009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50009(Registro50009 r) {
    return r.valor + r.id;
}
