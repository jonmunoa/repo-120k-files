// fichero 31137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31137;

Registro31137 crear_registro31137(int id) {
    Registro31137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31137(Registro31137 r) {
    return r.valor + r.id;
}
