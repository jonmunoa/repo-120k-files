// fichero 10549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10549;

Registro10549 crear_registro10549(int id) {
    Registro10549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10549(Registro10549 r) {
    return r.valor + r.id;
}
