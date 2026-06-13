// fichero 17489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17489;

Registro17489 crear_registro17489(int id) {
    Registro17489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17489(Registro17489 r) {
    return r.valor + r.id;
}
