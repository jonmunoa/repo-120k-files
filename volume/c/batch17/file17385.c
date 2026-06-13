// fichero 17385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17385;

Registro17385 crear_registro17385(int id) {
    Registro17385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17385(Registro17385 r) {
    return r.valor + r.id;
}
