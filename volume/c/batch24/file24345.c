// fichero 24345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24345;

Registro24345 crear_registro24345(int id) {
    Registro24345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24345(Registro24345 r) {
    return r.valor + r.id;
}
