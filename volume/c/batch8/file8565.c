// fichero 8565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8565;

Registro8565 crear_registro8565(int id) {
    Registro8565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8565(Registro8565 r) {
    return r.valor + r.id;
}
