// fichero 19881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19881;

Registro19881 crear_registro19881(int id) {
    Registro19881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19881(Registro19881 r) {
    return r.valor + r.id;
}
