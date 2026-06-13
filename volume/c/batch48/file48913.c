// fichero 48913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48913;

Registro48913 crear_registro48913(int id) {
    Registro48913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48913(Registro48913 r) {
    return r.valor + r.id;
}
