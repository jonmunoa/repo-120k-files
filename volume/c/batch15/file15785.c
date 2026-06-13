// fichero 15785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15785;

Registro15785 crear_registro15785(int id) {
    Registro15785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15785(Registro15785 r) {
    return r.valor + r.id;
}
