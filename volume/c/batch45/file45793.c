// fichero 45793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45793;

Registro45793 crear_registro45793(int id) {
    Registro45793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45793(Registro45793 r) {
    return r.valor + r.id;
}
