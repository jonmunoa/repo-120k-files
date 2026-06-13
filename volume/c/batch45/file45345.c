// fichero 45345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45345;

Registro45345 crear_registro45345(int id) {
    Registro45345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45345(Registro45345 r) {
    return r.valor + r.id;
}
