// fichero 39485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39485;

Registro39485 crear_registro39485(int id) {
    Registro39485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39485(Registro39485 r) {
    return r.valor + r.id;
}
