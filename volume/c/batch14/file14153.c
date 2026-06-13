// fichero 14153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14153;

Registro14153 crear_registro14153(int id) {
    Registro14153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14153(Registro14153 r) {
    return r.valor + r.id;
}
