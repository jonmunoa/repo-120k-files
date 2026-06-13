// fichero 18521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18521;

Registro18521 crear_registro18521(int id) {
    Registro18521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18521(Registro18521 r) {
    return r.valor + r.id;
}
