// fichero 31765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31765;

Registro31765 crear_registro31765(int id) {
    Registro31765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31765(Registro31765 r) {
    return r.valor + r.id;
}
