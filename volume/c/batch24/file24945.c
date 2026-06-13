// fichero 24945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24945;

Registro24945 crear_registro24945(int id) {
    Registro24945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24945(Registro24945 r) {
    return r.valor + r.id;
}
