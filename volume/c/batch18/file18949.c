// fichero 18949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18949;

Registro18949 crear_registro18949(int id) {
    Registro18949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18949(Registro18949 r) {
    return r.valor + r.id;
}
