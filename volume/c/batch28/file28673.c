// fichero 28673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28673;

Registro28673 crear_registro28673(int id) {
    Registro28673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28673(Registro28673 r) {
    return r.valor + r.id;
}
