// fichero 53353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53353;

Registro53353 crear_registro53353(int id) {
    Registro53353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53353(Registro53353 r) {
    return r.valor + r.id;
}
