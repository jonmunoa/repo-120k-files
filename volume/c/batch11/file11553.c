// fichero 11553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11553;

Registro11553 crear_registro11553(int id) {
    Registro11553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11553(Registro11553 r) {
    return r.valor + r.id;
}
