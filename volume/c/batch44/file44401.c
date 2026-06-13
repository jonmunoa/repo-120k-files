// fichero 44401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44401;

Registro44401 crear_registro44401(int id) {
    Registro44401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44401(Registro44401 r) {
    return r.valor + r.id;
}
