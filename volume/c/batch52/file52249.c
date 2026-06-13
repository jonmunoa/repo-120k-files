// fichero 52249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52249;

Registro52249 crear_registro52249(int id) {
    Registro52249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52249(Registro52249 r) {
    return r.valor + r.id;
}
