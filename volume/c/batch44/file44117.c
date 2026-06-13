// fichero 44117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44117;

Registro44117 crear_registro44117(int id) {
    Registro44117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44117(Registro44117 r) {
    return r.valor + r.id;
}
