// fichero 24009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24009;

Registro24009 crear_registro24009(int id) {
    Registro24009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24009(Registro24009 r) {
    return r.valor + r.id;
}
