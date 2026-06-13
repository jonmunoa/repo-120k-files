// fichero 52317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52317;

Registro52317 crear_registro52317(int id) {
    Registro52317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52317(Registro52317 r) {
    return r.valor + r.id;
}
