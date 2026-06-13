// fichero 52077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52077;

Registro52077 crear_registro52077(int id) {
    Registro52077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52077(Registro52077 r) {
    return r.valor + r.id;
}
