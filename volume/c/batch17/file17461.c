// fichero 17461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17461;

Registro17461 crear_registro17461(int id) {
    Registro17461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17461(Registro17461 r) {
    return r.valor + r.id;
}
