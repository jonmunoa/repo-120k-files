// fichero 17093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17093;

Registro17093 crear_registro17093(int id) {
    Registro17093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17093(Registro17093 r) {
    return r.valor + r.id;
}
