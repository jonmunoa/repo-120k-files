// fichero 32737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32737;

Registro32737 crear_registro32737(int id) {
    Registro32737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32737(Registro32737 r) {
    return r.valor + r.id;
}
