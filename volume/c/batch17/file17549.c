// fichero 17549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17549;

Registro17549 crear_registro17549(int id) {
    Registro17549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17549(Registro17549 r) {
    return r.valor + r.id;
}
