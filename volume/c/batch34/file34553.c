// fichero 34553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34553;

Registro34553 crear_registro34553(int id) {
    Registro34553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34553(Registro34553 r) {
    return r.valor + r.id;
}
