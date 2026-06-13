// fichero 35081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35081;

Registro35081 crear_registro35081(int id) {
    Registro35081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35081(Registro35081 r) {
    return r.valor + r.id;
}
