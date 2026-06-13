// fichero 1617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1617;

Registro1617 crear_registro1617(int id) {
    Registro1617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1617(Registro1617 r) {
    return r.valor + r.id;
}
