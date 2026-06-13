// fichero 52645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52645;

Registro52645 crear_registro52645(int id) {
    Registro52645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52645(Registro52645 r) {
    return r.valor + r.id;
}
