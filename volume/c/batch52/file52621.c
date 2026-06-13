// fichero 52621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52621;

Registro52621 crear_registro52621(int id) {
    Registro52621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52621(Registro52621 r) {
    return r.valor + r.id;
}
