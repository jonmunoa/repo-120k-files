// fichero 52513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52513;

Registro52513 crear_registro52513(int id) {
    Registro52513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52513(Registro52513 r) {
    return r.valor + r.id;
}
