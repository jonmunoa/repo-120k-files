// fichero 34485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34485;

Registro34485 crear_registro34485(int id) {
    Registro34485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34485(Registro34485 r) {
    return r.valor + r.id;
}
