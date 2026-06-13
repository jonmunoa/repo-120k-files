// fichero 17485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17485;

Registro17485 crear_registro17485(int id) {
    Registro17485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17485(Registro17485 r) {
    return r.valor + r.id;
}
