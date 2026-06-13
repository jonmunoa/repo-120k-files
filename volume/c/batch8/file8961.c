// fichero 8961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8961;

Registro8961 crear_registro8961(int id) {
    Registro8961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8961(Registro8961 r) {
    return r.valor + r.id;
}
