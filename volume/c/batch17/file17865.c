// fichero 17865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17865;

Registro17865 crear_registro17865(int id) {
    Registro17865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17865(Registro17865 r) {
    return r.valor + r.id;
}
