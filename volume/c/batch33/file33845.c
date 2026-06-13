// fichero 33845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33845;

Registro33845 crear_registro33845(int id) {
    Registro33845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33845(Registro33845 r) {
    return r.valor + r.id;
}
