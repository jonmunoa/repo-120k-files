// fichero 21009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21009;

Registro21009 crear_registro21009(int id) {
    Registro21009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21009(Registro21009 r) {
    return r.valor + r.id;
}
