// fichero 25009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25009;

Registro25009 crear_registro25009(int id) {
    Registro25009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25009(Registro25009 r) {
    return r.valor + r.id;
}
