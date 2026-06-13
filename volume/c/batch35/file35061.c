// fichero 35061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35061;

Registro35061 crear_registro35061(int id) {
    Registro35061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35061(Registro35061 r) {
    return r.valor + r.id;
}
