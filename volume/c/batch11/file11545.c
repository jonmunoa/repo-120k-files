// fichero 11545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11545;

Registro11545 crear_registro11545(int id) {
    Registro11545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11545(Registro11545 r) {
    return r.valor + r.id;
}
