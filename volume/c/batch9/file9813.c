// fichero 9813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9813;

Registro9813 crear_registro9813(int id) {
    Registro9813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9813(Registro9813 r) {
    return r.valor + r.id;
}
