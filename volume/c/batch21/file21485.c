// fichero 21485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21485;

Registro21485 crear_registro21485(int id) {
    Registro21485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21485(Registro21485 r) {
    return r.valor + r.id;
}
