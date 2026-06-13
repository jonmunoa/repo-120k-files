// fichero 27577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27577;

Registro27577 crear_registro27577(int id) {
    Registro27577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27577(Registro27577 r) {
    return r.valor + r.id;
}
