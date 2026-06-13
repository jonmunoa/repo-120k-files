// fichero 33877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33877;

Registro33877 crear_registro33877(int id) {
    Registro33877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33877(Registro33877 r) {
    return r.valor + r.id;
}
