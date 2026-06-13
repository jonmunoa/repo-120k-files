// fichero 45913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45913;

Registro45913 crear_registro45913(int id) {
    Registro45913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45913(Registro45913 r) {
    return r.valor + r.id;
}
