// fichero 24957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24957;

Registro24957 crear_registro24957(int id) {
    Registro24957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24957(Registro24957 r) {
    return r.valor + r.id;
}
