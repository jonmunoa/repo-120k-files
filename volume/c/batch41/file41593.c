// fichero 41593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41593;

Registro41593 crear_registro41593(int id) {
    Registro41593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41593(Registro41593 r) {
    return r.valor + r.id;
}
