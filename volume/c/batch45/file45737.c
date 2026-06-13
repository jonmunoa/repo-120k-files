// fichero 45737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45737;

Registro45737 crear_registro45737(int id) {
    Registro45737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45737(Registro45737 r) {
    return r.valor + r.id;
}
