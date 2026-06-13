// fichero 1381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1381;

Registro1381 crear_registro1381(int id) {
    Registro1381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1381(Registro1381 r) {
    return r.valor + r.id;
}
