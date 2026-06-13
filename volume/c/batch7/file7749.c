// fichero 7749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7749;

Registro7749 crear_registro7749(int id) {
    Registro7749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7749(Registro7749 r) {
    return r.valor + r.id;
}
