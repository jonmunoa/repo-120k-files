// fichero 52693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52693;

Registro52693 crear_registro52693(int id) {
    Registro52693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52693(Registro52693 r) {
    return r.valor + r.id;
}
