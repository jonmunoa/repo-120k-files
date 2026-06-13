// fichero 20329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20329;

Registro20329 crear_registro20329(int id) {
    Registro20329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20329(Registro20329 r) {
    return r.valor + r.id;
}
