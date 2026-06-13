// fichero 10853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10853;

Registro10853 crear_registro10853(int id) {
    Registro10853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10853(Registro10853 r) {
    return r.valor + r.id;
}
