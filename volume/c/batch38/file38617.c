// fichero 38617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38617;

Registro38617 crear_registro38617(int id) {
    Registro38617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38617(Registro38617 r) {
    return r.valor + r.id;
}
