// fichero 31965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31965;

Registro31965 crear_registro31965(int id) {
    Registro31965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31965(Registro31965 r) {
    return r.valor + r.id;
}
