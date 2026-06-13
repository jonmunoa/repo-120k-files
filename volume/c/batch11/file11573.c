// fichero 11573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11573;

Registro11573 crear_registro11573(int id) {
    Registro11573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11573(Registro11573 r) {
    return r.valor + r.id;
}
