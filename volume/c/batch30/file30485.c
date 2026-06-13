// fichero 30485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30485;

Registro30485 crear_registro30485(int id) {
    Registro30485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30485(Registro30485 r) {
    return r.valor + r.id;
}
