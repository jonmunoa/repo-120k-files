// fichero 13477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13477;

Registro13477 crear_registro13477(int id) {
    Registro13477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13477(Registro13477 r) {
    return r.valor + r.id;
}
