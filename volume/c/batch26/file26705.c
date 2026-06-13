// fichero 26705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26705;

Registro26705 crear_registro26705(int id) {
    Registro26705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26705(Registro26705 r) {
    return r.valor + r.id;
}
