// fichero 31185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31185;

Registro31185 crear_registro31185(int id) {
    Registro31185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31185(Registro31185 r) {
    return r.valor + r.id;
}
