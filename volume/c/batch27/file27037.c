// fichero 27037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27037;

Registro27037 crear_registro27037(int id) {
    Registro27037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27037(Registro27037 r) {
    return r.valor + r.id;
}
