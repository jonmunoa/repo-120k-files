// fichero 53809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53809;

Registro53809 crear_registro53809(int id) {
    Registro53809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53809(Registro53809 r) {
    return r.valor + r.id;
}
