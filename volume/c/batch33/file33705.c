// fichero 33705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33705;

Registro33705 crear_registro33705(int id) {
    Registro33705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33705(Registro33705 r) {
    return r.valor + r.id;
}
