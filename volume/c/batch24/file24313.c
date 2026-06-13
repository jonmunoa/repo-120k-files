// fichero 24313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24313;

Registro24313 crear_registro24313(int id) {
    Registro24313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24313(Registro24313 r) {
    return r.valor + r.id;
}
