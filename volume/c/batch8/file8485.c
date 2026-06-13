// fichero 8485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8485;

Registro8485 crear_registro8485(int id) {
    Registro8485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8485(Registro8485 r) {
    return r.valor + r.id;
}
