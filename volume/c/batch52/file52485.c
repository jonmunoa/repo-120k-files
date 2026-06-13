// fichero 52485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52485;

Registro52485 crear_registro52485(int id) {
    Registro52485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52485(Registro52485 r) {
    return r.valor + r.id;
}
