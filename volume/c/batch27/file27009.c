// fichero 27009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27009;

Registro27009 crear_registro27009(int id) {
    Registro27009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27009(Registro27009 r) {
    return r.valor + r.id;
}
