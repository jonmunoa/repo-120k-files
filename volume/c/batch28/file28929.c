// fichero 28929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28929;

Registro28929 crear_registro28929(int id) {
    Registro28929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28929(Registro28929 r) {
    return r.valor + r.id;
}
