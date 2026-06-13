// fichero 28249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28249;

Registro28249 crear_registro28249(int id) {
    Registro28249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28249(Registro28249 r) {
    return r.valor + r.id;
}
