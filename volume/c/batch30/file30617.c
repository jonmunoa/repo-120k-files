// fichero 30617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30617;

Registro30617 crear_registro30617(int id) {
    Registro30617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30617(Registro30617 r) {
    return r.valor + r.id;
}
