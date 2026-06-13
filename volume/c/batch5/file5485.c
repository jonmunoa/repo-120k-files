// fichero 5485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5485;

Registro5485 crear_registro5485(int id) {
    Registro5485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5485(Registro5485 r) {
    return r.valor + r.id;
}
