// fichero 11673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11673;

Registro11673 crear_registro11673(int id) {
    Registro11673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11673(Registro11673 r) {
    return r.valor + r.id;
}
