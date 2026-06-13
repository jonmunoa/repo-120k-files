// fichero 52817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52817;

Registro52817 crear_registro52817(int id) {
    Registro52817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52817(Registro52817 r) {
    return r.valor + r.id;
}
