// fichero 17109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17109;

Registro17109 crear_registro17109(int id) {
    Registro17109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17109(Registro17109 r) {
    return r.valor + r.id;
}
