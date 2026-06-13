// fichero 32345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32345;

Registro32345 crear_registro32345(int id) {
    Registro32345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32345(Registro32345 r) {
    return r.valor + r.id;
}
