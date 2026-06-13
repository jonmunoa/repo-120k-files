// fichero 51617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51617;

Registro51617 crear_registro51617(int id) {
    Registro51617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51617(Registro51617 r) {
    return r.valor + r.id;
}
