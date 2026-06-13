// fichero 48841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48841;

Registro48841 crear_registro48841(int id) {
    Registro48841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48841(Registro48841 r) {
    return r.valor + r.id;
}
