// fichero 28485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28485;

Registro28485 crear_registro28485(int id) {
    Registro28485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28485(Registro28485 r) {
    return r.valor + r.id;
}
