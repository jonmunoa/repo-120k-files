// fichero 47017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47017;

Registro47017 crear_registro47017(int id) {
    Registro47017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47017(Registro47017 r) {
    return r.valor + r.id;
}
