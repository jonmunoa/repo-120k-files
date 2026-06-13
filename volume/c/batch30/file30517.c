// fichero 30517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30517;

Registro30517 crear_registro30517(int id) {
    Registro30517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30517(Registro30517 r) {
    return r.valor + r.id;
}
