// fichero 50581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50581;

Registro50581 crear_registro50581(int id) {
    Registro50581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50581(Registro50581 r) {
    return r.valor + r.id;
}
