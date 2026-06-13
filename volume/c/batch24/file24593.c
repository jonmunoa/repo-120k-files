// fichero 24593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24593;

Registro24593 crear_registro24593(int id) {
    Registro24593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24593(Registro24593 r) {
    return r.valor + r.id;
}
