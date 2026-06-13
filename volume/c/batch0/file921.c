// fichero 921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro921;

Registro921 crear_registro921(int id) {
    Registro921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro921(Registro921 r) {
    return r.valor + r.id;
}
