// fichero 24105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24105;

Registro24105 crear_registro24105(int id) {
    Registro24105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24105(Registro24105 r) {
    return r.valor + r.id;
}
