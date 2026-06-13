// fichero 24737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24737;

Registro24737 crear_registro24737(int id) {
    Registro24737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24737(Registro24737 r) {
    return r.valor + r.id;
}
