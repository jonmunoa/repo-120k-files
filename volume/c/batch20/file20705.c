// fichero 20705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20705;

Registro20705 crear_registro20705(int id) {
    Registro20705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20705(Registro20705 r) {
    return r.valor + r.id;
}
