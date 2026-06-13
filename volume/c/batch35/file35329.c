// fichero 35329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35329;

Registro35329 crear_registro35329(int id) {
    Registro35329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35329(Registro35329 r) {
    return r.valor + r.id;
}
