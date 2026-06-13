// fichero 33949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33949;

Registro33949 crear_registro33949(int id) {
    Registro33949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33949(Registro33949 r) {
    return r.valor + r.id;
}
