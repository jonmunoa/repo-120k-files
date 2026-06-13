// fichero 39489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39489;

Registro39489 crear_registro39489(int id) {
    Registro39489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39489(Registro39489 r) {
    return r.valor + r.id;
}
