// fichero 52265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52265;

Registro52265 crear_registro52265(int id) {
    Registro52265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52265(Registro52265 r) {
    return r.valor + r.id;
}
