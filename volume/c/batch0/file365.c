// fichero 365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro365;

Registro365 crear_registro365(int id) {
    Registro365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro365(Registro365 r) {
    return r.valor + r.id;
}
