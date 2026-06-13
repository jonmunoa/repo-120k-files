// fichero 45469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45469;

Registro45469 crear_registro45469(int id) {
    Registro45469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45469(Registro45469 r) {
    return r.valor + r.id;
}
