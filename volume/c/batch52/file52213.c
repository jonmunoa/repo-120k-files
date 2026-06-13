// fichero 52213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52213;

Registro52213 crear_registro52213(int id) {
    Registro52213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52213(Registro52213 r) {
    return r.valor + r.id;
}
