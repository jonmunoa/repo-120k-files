// fichero 38093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38093;

Registro38093 crear_registro38093(int id) {
    Registro38093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38093(Registro38093 r) {
    return r.valor + r.id;
}
