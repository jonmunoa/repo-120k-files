// fichero 24281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24281;

Registro24281 crear_registro24281(int id) {
    Registro24281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24281(Registro24281 r) {
    return r.valor + r.id;
}
