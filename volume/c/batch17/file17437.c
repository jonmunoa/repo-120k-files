// fichero 17437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17437;

Registro17437 crear_registro17437(int id) {
    Registro17437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17437(Registro17437 r) {
    return r.valor + r.id;
}
