// fichero 17961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17961;

Registro17961 crear_registro17961(int id) {
    Registro17961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17961(Registro17961 r) {
    return r.valor + r.id;
}
