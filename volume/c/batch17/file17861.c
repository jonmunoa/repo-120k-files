// fichero 17861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17861;

Registro17861 crear_registro17861(int id) {
    Registro17861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17861(Registro17861 r) {
    return r.valor + r.id;
}
