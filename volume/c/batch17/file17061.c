// fichero 17061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17061;

Registro17061 crear_registro17061(int id) {
    Registro17061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17061(Registro17061 r) {
    return r.valor + r.id;
}
