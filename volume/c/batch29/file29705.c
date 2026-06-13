// fichero 29705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29705;

Registro29705 crear_registro29705(int id) {
    Registro29705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29705(Registro29705 r) {
    return r.valor + r.id;
}
