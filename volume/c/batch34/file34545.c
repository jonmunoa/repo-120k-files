// fichero 34545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34545;

Registro34545 crear_registro34545(int id) {
    Registro34545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34545(Registro34545 r) {
    return r.valor + r.id;
}
