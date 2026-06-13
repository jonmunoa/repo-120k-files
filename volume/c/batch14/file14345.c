// fichero 14345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14345;

Registro14345 crear_registro14345(int id) {
    Registro14345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14345(Registro14345 r) {
    return r.valor + r.id;
}
