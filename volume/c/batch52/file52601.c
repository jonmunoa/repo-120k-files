// fichero 52601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52601;

Registro52601 crear_registro52601(int id) {
    Registro52601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52601(Registro52601 r) {
    return r.valor + r.id;
}
