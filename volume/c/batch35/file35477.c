// fichero 35477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35477;

Registro35477 crear_registro35477(int id) {
    Registro35477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35477(Registro35477 r) {
    return r.valor + r.id;
}
