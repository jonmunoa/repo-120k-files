// fichero 33693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33693;

Registro33693 crear_registro33693(int id) {
    Registro33693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33693(Registro33693 r) {
    return r.valor + r.id;
}
