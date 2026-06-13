// fichero 53065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53065;

Registro53065 crear_registro53065(int id) {
    Registro53065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53065(Registro53065 r) {
    return r.valor + r.id;
}
