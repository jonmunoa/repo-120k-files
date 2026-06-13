// fichero 43117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43117;

Registro43117 crear_registro43117(int id) {
    Registro43117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43117(Registro43117 r) {
    return r.valor + r.id;
}
