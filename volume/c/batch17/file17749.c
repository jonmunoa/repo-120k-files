// fichero 17749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17749;

Registro17749 crear_registro17749(int id) {
    Registro17749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17749(Registro17749 r) {
    return r.valor + r.id;
}
