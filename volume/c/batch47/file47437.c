// fichero 47437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47437;

Registro47437 crear_registro47437(int id) {
    Registro47437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47437(Registro47437 r) {
    return r.valor + r.id;
}
