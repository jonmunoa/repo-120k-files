// fichero 19657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19657;

Registro19657 crear_registro19657(int id) {
    Registro19657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19657(Registro19657 r) {
    return r.valor + r.id;
}
