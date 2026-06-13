// fichero 31937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31937;

Registro31937 crear_registro31937(int id) {
    Registro31937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31937(Registro31937 r) {
    return r.valor + r.id;
}
