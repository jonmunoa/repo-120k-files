// fichero 6485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6485;

Registro6485 crear_registro6485(int id) {
    Registro6485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6485(Registro6485 r) {
    return r.valor + r.id;
}
