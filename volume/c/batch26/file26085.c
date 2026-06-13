// fichero 26085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26085;

Registro26085 crear_registro26085(int id) {
    Registro26085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26085(Registro26085 r) {
    return r.valor + r.id;
}
