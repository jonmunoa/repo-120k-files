// fichero 24561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24561;

Registro24561 crear_registro24561(int id) {
    Registro24561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24561(Registro24561 r) {
    return r.valor + r.id;
}
