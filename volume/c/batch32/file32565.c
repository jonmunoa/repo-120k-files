// fichero 32565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32565;

Registro32565 crear_registro32565(int id) {
    Registro32565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32565(Registro32565 r) {
    return r.valor + r.id;
}
