// fichero 30009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30009;

Registro30009 crear_registro30009(int id) {
    Registro30009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30009(Registro30009 r) {
    return r.valor + r.id;
}
