// fichero 4705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4705;

Registro4705 crear_registro4705(int id) {
    Registro4705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4705(Registro4705 r) {
    return r.valor + r.id;
}
