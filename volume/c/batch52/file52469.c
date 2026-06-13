// fichero 52469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52469;

Registro52469 crear_registro52469(int id) {
    Registro52469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52469(Registro52469 r) {
    return r.valor + r.id;
}
