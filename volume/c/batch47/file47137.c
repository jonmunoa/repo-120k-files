// fichero 47137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47137;

Registro47137 crear_registro47137(int id) {
    Registro47137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47137(Registro47137 r) {
    return r.valor + r.id;
}
