// fichero 28281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28281;

Registro28281 crear_registro28281(int id) {
    Registro28281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28281(Registro28281 r) {
    return r.valor + r.id;
}
