// fichero 20485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20485;

Registro20485 crear_registro20485(int id) {
    Registro20485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20485(Registro20485 r) {
    return r.valor + r.id;
}
