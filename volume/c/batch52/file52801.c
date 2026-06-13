// fichero 52801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52801;

Registro52801 crear_registro52801(int id) {
    Registro52801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52801(Registro52801 r) {
    return r.valor + r.id;
}
