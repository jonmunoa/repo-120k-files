// fichero 19281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19281;

Registro19281 crear_registro19281(int id) {
    Registro19281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19281(Registro19281 r) {
    return r.valor + r.id;
}
