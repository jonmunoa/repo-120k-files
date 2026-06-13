// fichero 4501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4501;

Registro4501 crear_registro4501(int id) {
    Registro4501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4501(Registro4501 r) {
    return r.valor + r.id;
}
