// fichero 14705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14705;

Registro14705 crear_registro14705(int id) {
    Registro14705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14705(Registro14705 r) {
    return r.valor + r.id;
}
