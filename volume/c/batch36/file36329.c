// fichero 36329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36329;

Registro36329 crear_registro36329(int id) {
    Registro36329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36329(Registro36329 r) {
    return r.valor + r.id;
}
