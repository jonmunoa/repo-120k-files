// fichero 17705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17705;

Registro17705 crear_registro17705(int id) {
    Registro17705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17705(Registro17705 r) {
    return r.valor + r.id;
}
