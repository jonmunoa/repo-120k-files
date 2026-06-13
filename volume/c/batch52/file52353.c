// fichero 52353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52353;

Registro52353 crear_registro52353(int id) {
    Registro52353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52353(Registro52353 r) {
    return r.valor + r.id;
}
