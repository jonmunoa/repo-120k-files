// fichero 48697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48697;

Registro48697 crear_registro48697(int id) {
    Registro48697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48697(Registro48697 r) {
    return r.valor + r.id;
}
