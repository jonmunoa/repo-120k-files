// fichero 52489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52489;

Registro52489 crear_registro52489(int id) {
    Registro52489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52489(Registro52489 r) {
    return r.valor + r.id;
}
