// fichero 31365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31365;

Registro31365 crear_registro31365(int id) {
    Registro31365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31365(Registro31365 r) {
    return r.valor + r.id;
}
