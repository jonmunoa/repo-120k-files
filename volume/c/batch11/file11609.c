// fichero 11609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11609;

Registro11609 crear_registro11609(int id) {
    Registro11609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11609(Registro11609 r) {
    return r.valor + r.id;
}
