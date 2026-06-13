// fichero 35017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35017;

Registro35017 crear_registro35017(int id) {
    Registro35017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35017(Registro35017 r) {
    return r.valor + r.id;
}
