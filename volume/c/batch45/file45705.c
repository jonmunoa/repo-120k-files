// fichero 45705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45705;

Registro45705 crear_registro45705(int id) {
    Registro45705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45705(Registro45705 r) {
    return r.valor + r.id;
}
