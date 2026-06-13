// fichero 33961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33961;

Registro33961 crear_registro33961(int id) {
    Registro33961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33961(Registro33961 r) {
    return r.valor + r.id;
}
