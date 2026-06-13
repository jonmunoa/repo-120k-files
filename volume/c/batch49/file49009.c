// fichero 49009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49009;

Registro49009 crear_registro49009(int id) {
    Registro49009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49009(Registro49009 r) {
    return r.valor + r.id;
}
