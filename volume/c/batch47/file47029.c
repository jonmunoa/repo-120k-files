// fichero 47029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47029;

Registro47029 crear_registro47029(int id) {
    Registro47029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47029(Registro47029 r) {
    return r.valor + r.id;
}
