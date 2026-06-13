// fichero 17085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17085;

Registro17085 crear_registro17085(int id) {
    Registro17085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17085(Registro17085 r) {
    return r.valor + r.id;
}
