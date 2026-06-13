// fichero 14617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14617;

Registro14617 crear_registro14617(int id) {
    Registro14617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14617(Registro14617 r) {
    return r.valor + r.id;
}
