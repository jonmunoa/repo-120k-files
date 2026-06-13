// fichero 44489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44489;

Registro44489 crear_registro44489(int id) {
    Registro44489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44489(Registro44489 r) {
    return r.valor + r.id;
}
