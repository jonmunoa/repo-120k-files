// fichero 12153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12153;

Registro12153 crear_registro12153(int id) {
    Registro12153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12153(Registro12153 r) {
    return r.valor + r.id;
}
