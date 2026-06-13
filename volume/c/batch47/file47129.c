// fichero 47129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47129;

Registro47129 crear_registro47129(int id) {
    Registro47129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47129(Registro47129 r) {
    return r.valor + r.id;
}
