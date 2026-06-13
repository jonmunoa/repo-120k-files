// fichero 47789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47789;

Registro47789 crear_registro47789(int id) {
    Registro47789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47789(Registro47789 r) {
    return r.valor + r.id;
}
