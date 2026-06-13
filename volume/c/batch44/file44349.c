// fichero 44349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44349;

Registro44349 crear_registro44349(int id) {
    Registro44349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44349(Registro44349 r) {
    return r.valor + r.id;
}
