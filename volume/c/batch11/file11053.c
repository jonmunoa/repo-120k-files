// fichero 11053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11053;

Registro11053 crear_registro11053(int id) {
    Registro11053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11053(Registro11053 r) {
    return r.valor + r.id;
}
