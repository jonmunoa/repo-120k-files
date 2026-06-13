// fichero 47549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47549;

Registro47549 crear_registro47549(int id) {
    Registro47549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47549(Registro47549 r) {
    return r.valor + r.id;
}
