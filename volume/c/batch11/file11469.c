// fichero 11469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11469;

Registro11469 crear_registro11469(int id) {
    Registro11469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11469(Registro11469 r) {
    return r.valor + r.id;
}
