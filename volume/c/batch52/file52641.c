// fichero 52641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52641;

Registro52641 crear_registro52641(int id) {
    Registro52641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52641(Registro52641 r) {
    return r.valor + r.id;
}
