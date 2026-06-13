// fichero 14993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14993;

Registro14993 crear_registro14993(int id) {
    Registro14993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14993(Registro14993 r) {
    return r.valor + r.id;
}
