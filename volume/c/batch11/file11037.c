// fichero 11037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11037;

Registro11037 crear_registro11037(int id) {
    Registro11037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11037(Registro11037 r) {
    return r.valor + r.id;
}
