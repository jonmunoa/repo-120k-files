// fichero 47313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47313;

Registro47313 crear_registro47313(int id) {
    Registro47313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47313(Registro47313 r) {
    return r.valor + r.id;
}
