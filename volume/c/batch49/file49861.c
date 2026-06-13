// fichero 49861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49861;

Registro49861 crear_registro49861(int id) {
    Registro49861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49861(Registro49861 r) {
    return r.valor + r.id;
}
