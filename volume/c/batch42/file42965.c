// fichero 42965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42965;

Registro42965 crear_registro42965(int id) {
    Registro42965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42965(Registro42965 r) {
    return r.valor + r.id;
}
