// fichero 31725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31725;

Registro31725 crear_registro31725(int id) {
    Registro31725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31725(Registro31725 r) {
    return r.valor + r.id;
}
