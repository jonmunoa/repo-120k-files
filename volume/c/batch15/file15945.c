// fichero 15945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15945;

Registro15945 crear_registro15945(int id) {
    Registro15945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15945(Registro15945 r) {
    return r.valor + r.id;
}
