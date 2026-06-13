// fichero 27401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27401;

Registro27401 crear_registro27401(int id) {
    Registro27401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27401(Registro27401 r) {
    return r.valor + r.id;
}
