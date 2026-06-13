// fichero 5705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5705;

Registro5705 crear_registro5705(int id) {
    Registro5705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5705(Registro5705 r) {
    return r.valor + r.id;
}
