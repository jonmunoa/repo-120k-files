// fichero 27649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27649;

Registro27649 crear_registro27649(int id) {
    Registro27649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27649(Registro27649 r) {
    return r.valor + r.id;
}
