// fichero 49617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49617;

Registro49617 crear_registro49617(int id) {
    Registro49617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49617(Registro49617 r) {
    return r.valor + r.id;
}
