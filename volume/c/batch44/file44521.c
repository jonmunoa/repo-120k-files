// fichero 44521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44521;

Registro44521 crear_registro44521(int id) {
    Registro44521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44521(Registro44521 r) {
    return r.valor + r.id;
}
