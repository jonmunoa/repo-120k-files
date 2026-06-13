// fichero 52113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52113;

Registro52113 crear_registro52113(int id) {
    Registro52113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52113(Registro52113 r) {
    return r.valor + r.id;
}
