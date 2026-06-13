// fichero 7733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7733;

Registro7733 crear_registro7733(int id) {
    Registro7733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7733(Registro7733 r) {
    return r.valor + r.id;
}
