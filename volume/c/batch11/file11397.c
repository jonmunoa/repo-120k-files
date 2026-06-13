// fichero 11397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11397;

Registro11397 crear_registro11397(int id) {
    Registro11397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11397(Registro11397 r) {
    return r.valor + r.id;
}
