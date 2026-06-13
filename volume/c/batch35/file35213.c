// fichero 35213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35213;

Registro35213 crear_registro35213(int id) {
    Registro35213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35213(Registro35213 r) {
    return r.valor + r.id;
}
