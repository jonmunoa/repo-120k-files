// fichero 52573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52573;

Registro52573 crear_registro52573(int id) {
    Registro52573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52573(Registro52573 r) {
    return r.valor + r.id;
}
