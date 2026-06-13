// fichero 31601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31601;

Registro31601 crear_registro31601(int id) {
    Registro31601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31601(Registro31601 r) {
    return r.valor + r.id;
}
