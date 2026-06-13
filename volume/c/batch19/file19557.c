// fichero 19557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19557;

Registro19557 crear_registro19557(int id) {
    Registro19557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19557(Registro19557 r) {
    return r.valor + r.id;
}
