// fichero 28185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28185;

Registro28185 crear_registro28185(int id) {
    Registro28185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28185(Registro28185 r) {
    return r.valor + r.id;
}
