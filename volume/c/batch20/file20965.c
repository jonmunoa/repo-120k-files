// fichero 20965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20965;

Registro20965 crear_registro20965(int id) {
    Registro20965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20965(Registro20965 r) {
    return r.valor + r.id;
}
