// fichero 52089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52089;

Registro52089 crear_registro52089(int id) {
    Registro52089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52089(Registro52089 r) {
    return r.valor + r.id;
}
