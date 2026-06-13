// fichero 1993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1993;

Registro1993 crear_registro1993(int id) {
    Registro1993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1993(Registro1993 r) {
    return r.valor + r.id;
}
