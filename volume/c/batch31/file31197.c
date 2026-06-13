// fichero 31197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31197;

Registro31197 crear_registro31197(int id) {
    Registro31197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31197(Registro31197 r) {
    return r.valor + r.id;
}
