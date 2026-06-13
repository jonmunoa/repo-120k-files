// fichero 48673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48673;

Registro48673 crear_registro48673(int id) {
    Registro48673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48673(Registro48673 r) {
    return r.valor + r.id;
}
