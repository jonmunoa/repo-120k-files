// fichero 153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro153;

Registro153 crear_registro153(int id) {
    Registro153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro153(Registro153 r) {
    return r.valor + r.id;
}
