// fichero 2009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2009;

Registro2009 crear_registro2009(int id) {
    Registro2009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2009(Registro2009 r) {
    return r.valor + r.id;
}
