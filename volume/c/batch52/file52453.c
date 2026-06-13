// fichero 52453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52453;

Registro52453 crear_registro52453(int id) {
    Registro52453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52453(Registro52453 r) {
    return r.valor + r.id;
}
