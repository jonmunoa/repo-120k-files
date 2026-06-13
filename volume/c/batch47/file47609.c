// fichero 47609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47609;

Registro47609 crear_registro47609(int id) {
    Registro47609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47609(Registro47609 r) {
    return r.valor + r.id;
}
