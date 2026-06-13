// fichero 52881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52881;

Registro52881 crear_registro52881(int id) {
    Registro52881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52881(Registro52881 r) {
    return r.valor + r.id;
}
