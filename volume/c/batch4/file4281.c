// fichero 4281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4281;

Registro4281 crear_registro4281(int id) {
    Registro4281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4281(Registro4281 r) {
    return r.valor + r.id;
}
