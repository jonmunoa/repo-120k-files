// fichero 57 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro57;

Registro57 crear_registro57(int id) {
    Registro57 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro57(Registro57 r) {
    return r.valor + r.id;
}
