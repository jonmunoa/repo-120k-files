// fichero 19025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19025;

Registro19025 crear_registro19025(int id) {
    Registro19025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19025(Registro19025 r) {
    return r.valor + r.id;
}
