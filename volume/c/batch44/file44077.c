// fichero 44077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44077;

Registro44077 crear_registro44077(int id) {
    Registro44077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44077(Registro44077 r) {
    return r.valor + r.id;
}
