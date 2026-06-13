// fichero 38173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38173;

Registro38173 crear_registro38173(int id) {
    Registro38173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38173(Registro38173 r) {
    return r.valor + r.id;
}
