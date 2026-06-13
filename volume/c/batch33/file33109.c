// fichero 33109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33109;

Registro33109 crear_registro33109(int id) {
    Registro33109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33109(Registro33109 r) {
    return r.valor + r.id;
}
