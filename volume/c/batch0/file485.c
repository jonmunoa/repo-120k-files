// fichero 485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro485;

Registro485 crear_registro485(int id) {
    Registro485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro485(Registro485 r) {
    return r.valor + r.id;
}
