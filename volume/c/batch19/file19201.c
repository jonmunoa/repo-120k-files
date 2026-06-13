// fichero 19201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19201;

Registro19201 crear_registro19201(int id) {
    Registro19201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19201(Registro19201 r) {
    return r.valor + r.id;
}
