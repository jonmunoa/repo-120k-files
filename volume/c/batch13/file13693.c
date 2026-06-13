// fichero 13693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13693;

Registro13693 crear_registro13693(int id) {
    Registro13693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13693(Registro13693 r) {
    return r.valor + r.id;
}
