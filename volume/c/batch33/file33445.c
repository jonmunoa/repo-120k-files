// fichero 33445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33445;

Registro33445 crear_registro33445(int id) {
    Registro33445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33445(Registro33445 r) {
    return r.valor + r.id;
}
