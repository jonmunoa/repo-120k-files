// fichero 1749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1749;

Registro1749 crear_registro1749(int id) {
    Registro1749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1749(Registro1749 r) {
    return r.valor + r.id;
}
