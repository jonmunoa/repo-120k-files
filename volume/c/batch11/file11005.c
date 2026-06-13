// fichero 11005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11005;

Registro11005 crear_registro11005(int id) {
    Registro11005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11005(Registro11005 r) {
    return r.valor + r.id;
}
