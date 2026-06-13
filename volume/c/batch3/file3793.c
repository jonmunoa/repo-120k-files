// fichero 3793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3793;

Registro3793 crear_registro3793(int id) {
    Registro3793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3793(Registro3793 r) {
    return r.valor + r.id;
}
