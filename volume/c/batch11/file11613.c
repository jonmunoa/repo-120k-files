// fichero 11613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11613;

Registro11613 crear_registro11613(int id) {
    Registro11613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11613(Registro11613 r) {
    return r.valor + r.id;
}
