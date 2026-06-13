// fichero 27601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27601;

Registro27601 crear_registro27601(int id) {
    Registro27601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27601(Registro27601 r) {
    return r.valor + r.id;
}
