// fichero 45241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45241;

Registro45241 crear_registro45241(int id) {
    Registro45241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45241(Registro45241 r) {
    return r.valor + r.id;
}
