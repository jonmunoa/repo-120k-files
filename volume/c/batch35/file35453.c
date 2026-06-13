// fichero 35453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35453;

Registro35453 crear_registro35453(int id) {
    Registro35453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35453(Registro35453 r) {
    return r.valor + r.id;
}
