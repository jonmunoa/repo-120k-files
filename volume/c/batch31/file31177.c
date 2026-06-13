// fichero 31177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31177;

Registro31177 crear_registro31177(int id) {
    Registro31177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31177(Registro31177 r) {
    return r.valor + r.id;
}
