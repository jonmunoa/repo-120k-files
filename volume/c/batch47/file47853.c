// fichero 47853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47853;

Registro47853 crear_registro47853(int id) {
    Registro47853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47853(Registro47853 r) {
    return r.valor + r.id;
}
