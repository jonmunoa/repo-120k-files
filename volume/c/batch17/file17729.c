// fichero 17729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17729;

Registro17729 crear_registro17729(int id) {
    Registro17729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17729(Registro17729 r) {
    return r.valor + r.id;
}
