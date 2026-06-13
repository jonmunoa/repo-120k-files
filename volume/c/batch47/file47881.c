// fichero 47881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47881;

Registro47881 crear_registro47881(int id) {
    Registro47881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47881(Registro47881 r) {
    return r.valor + r.id;
}
