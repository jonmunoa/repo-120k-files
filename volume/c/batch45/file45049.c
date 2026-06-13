// fichero 45049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45049;

Registro45049 crear_registro45049(int id) {
    Registro45049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45049(Registro45049 r) {
    return r.valor + r.id;
}
