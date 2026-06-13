// fichero 17657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17657;

Registro17657 crear_registro17657(int id) {
    Registro17657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17657(Registro17657 r) {
    return r.valor + r.id;
}
