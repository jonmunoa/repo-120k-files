// fichero 33241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33241;

Registro33241 crear_registro33241(int id) {
    Registro33241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33241(Registro33241 r) {
    return r.valor + r.id;
}
