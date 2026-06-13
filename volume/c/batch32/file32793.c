// fichero 32793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32793;

Registro32793 crear_registro32793(int id) {
    Registro32793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32793(Registro32793 r) {
    return r.valor + r.id;
}
