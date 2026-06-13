// fichero 52365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52365;

Registro52365 crear_registro52365(int id) {
    Registro52365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52365(Registro52365 r) {
    return r.valor + r.id;
}
