// fichero 17017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17017;

Registro17017 crear_registro17017(int id) {
    Registro17017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17017(Registro17017 r) {
    return r.valor + r.id;
}
