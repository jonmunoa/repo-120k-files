// fichero 43193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43193;

Registro43193 crear_registro43193(int id) {
    Registro43193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43193(Registro43193 r) {
    return r.valor + r.id;
}
