// fichero 47945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47945;

Registro47945 crear_registro47945(int id) {
    Registro47945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47945(Registro47945 r) {
    return r.valor + r.id;
}
