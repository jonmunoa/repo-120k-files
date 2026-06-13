// fichero 13109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13109;

Registro13109 crear_registro13109(int id) {
    Registro13109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13109(Registro13109 r) {
    return r.valor + r.id;
}
