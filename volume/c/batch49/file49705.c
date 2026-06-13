// fichero 49705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49705;

Registro49705 crear_registro49705(int id) {
    Registro49705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49705(Registro49705 r) {
    return r.valor + r.id;
}
