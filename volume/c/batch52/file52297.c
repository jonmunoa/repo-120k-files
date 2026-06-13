// fichero 52297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52297;

Registro52297 crear_registro52297(int id) {
    Registro52297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52297(Registro52297 r) {
    return r.valor + r.id;
}
