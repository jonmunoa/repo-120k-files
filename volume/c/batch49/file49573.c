// fichero 49573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49573;

Registro49573 crear_registro49573(int id) {
    Registro49573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49573(Registro49573 r) {
    return r.valor + r.id;
}
