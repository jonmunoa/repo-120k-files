// fichero 17185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17185;

Registro17185 crear_registro17185(int id) {
    Registro17185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17185(Registro17185 r) {
    return r.valor + r.id;
}
