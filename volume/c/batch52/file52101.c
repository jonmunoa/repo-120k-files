// fichero 52101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52101;

Registro52101 crear_registro52101(int id) {
    Registro52101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52101(Registro52101 r) {
    return r.valor + r.id;
}
