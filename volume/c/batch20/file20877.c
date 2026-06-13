// fichero 20877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20877;

Registro20877 crear_registro20877(int id) {
    Registro20877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20877(Registro20877 r) {
    return r.valor + r.id;
}
