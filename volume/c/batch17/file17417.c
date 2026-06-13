// fichero 17417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17417;

Registro17417 crear_registro17417(int id) {
    Registro17417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17417(Registro17417 r) {
    return r.valor + r.id;
}
