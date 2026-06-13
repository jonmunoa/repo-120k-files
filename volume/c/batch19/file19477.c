// fichero 19477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19477;

Registro19477 crear_registro19477(int id) {
    Registro19477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19477(Registro19477 r) {
    return r.valor + r.id;
}
