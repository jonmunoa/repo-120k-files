// fichero 31273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31273;

Registro31273 crear_registro31273(int id) {
    Registro31273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31273(Registro31273 r) {
    return r.valor + r.id;
}
