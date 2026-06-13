// fichero 19717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19717;

Registro19717 crear_registro19717(int id) {
    Registro19717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19717(Registro19717 r) {
    return r.valor + r.id;
}
