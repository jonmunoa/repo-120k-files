// fichero 22361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22361;

Registro22361 crear_registro22361(int id) {
    Registro22361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22361(Registro22361 r) {
    return r.valor + r.id;
}
