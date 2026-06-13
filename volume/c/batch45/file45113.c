// fichero 45113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45113;

Registro45113 crear_registro45113(int id) {
    Registro45113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45113(Registro45113 r) {
    return r.valor + r.id;
}
