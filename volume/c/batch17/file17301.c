// fichero 17301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17301;

Registro17301 crear_registro17301(int id) {
    Registro17301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17301(Registro17301 r) {
    return r.valor + r.id;
}
