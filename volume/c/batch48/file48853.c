// fichero 48853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48853;

Registro48853 crear_registro48853(int id) {
    Registro48853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48853(Registro48853 r) {
    return r.valor + r.id;
}
