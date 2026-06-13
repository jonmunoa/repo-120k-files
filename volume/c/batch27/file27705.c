// fichero 27705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27705;

Registro27705 crear_registro27705(int id) {
    Registro27705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27705(Registro27705 r) {
    return r.valor + r.id;
}
