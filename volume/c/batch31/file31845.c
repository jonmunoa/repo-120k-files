// fichero 31845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31845;

Registro31845 crear_registro31845(int id) {
    Registro31845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31845(Registro31845 r) {
    return r.valor + r.id;
}
