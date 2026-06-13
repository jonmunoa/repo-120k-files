// fichero 33737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33737;

Registro33737 crear_registro33737(int id) {
    Registro33737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33737(Registro33737 r) {
    return r.valor + r.id;
}
