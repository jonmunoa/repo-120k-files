// fichero 13837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13837;

Registro13837 crear_registro13837(int id) {
    Registro13837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13837(Registro13837 r) {
    return r.valor + r.id;
}
