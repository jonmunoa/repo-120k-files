// fichero 48241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48241;

Registro48241 crear_registro48241(int id) {
    Registro48241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48241(Registro48241 r) {
    return r.valor + r.id;
}
