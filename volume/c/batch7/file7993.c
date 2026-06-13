// fichero 7993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7993;

Registro7993 crear_registro7993(int id) {
    Registro7993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7993(Registro7993 r) {
    return r.valor + r.id;
}
