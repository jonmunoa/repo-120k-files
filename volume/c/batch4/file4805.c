// fichero 4805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4805;

Registro4805 crear_registro4805(int id) {
    Registro4805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4805(Registro4805 r) {
    return r.valor + r.id;
}
