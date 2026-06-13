// fichero 31069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31069;

Registro31069 crear_registro31069(int id) {
    Registro31069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31069(Registro31069 r) {
    return r.valor + r.id;
}
