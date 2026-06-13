// fichero 17077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17077;

Registro17077 crear_registro17077(int id) {
    Registro17077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17077(Registro17077 r) {
    return r.valor + r.id;
}
