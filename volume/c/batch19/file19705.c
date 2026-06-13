// fichero 19705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19705;

Registro19705 crear_registro19705(int id) {
    Registro19705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19705(Registro19705 r) {
    return r.valor + r.id;
}
