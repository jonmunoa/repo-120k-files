// fichero 31505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31505;

Registro31505 crear_registro31505(int id) {
    Registro31505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31505(Registro31505 r) {
    return r.valor + r.id;
}
