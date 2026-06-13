// fichero 24789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24789;

Registro24789 crear_registro24789(int id) {
    Registro24789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24789(Registro24789 r) {
    return r.valor + r.id;
}
