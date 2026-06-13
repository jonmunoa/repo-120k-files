// fichero 41397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41397;

Registro41397 crear_registro41397(int id) {
    Registro41397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41397(Registro41397 r) {
    return r.valor + r.id;
}
