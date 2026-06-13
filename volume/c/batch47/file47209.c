// fichero 47209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47209;

Registro47209 crear_registro47209(int id) {
    Registro47209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47209(Registro47209 r) {
    return r.valor + r.id;
}
