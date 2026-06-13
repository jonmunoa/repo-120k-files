// fichero 28489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28489;

Registro28489 crear_registro28489(int id) {
    Registro28489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28489(Registro28489 r) {
    return r.valor + r.id;
}
