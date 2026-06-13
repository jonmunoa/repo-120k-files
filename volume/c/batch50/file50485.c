// fichero 50485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50485;

Registro50485 crear_registro50485(int id) {
    Registro50485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50485(Registro50485 r) {
    return r.valor + r.id;
}
