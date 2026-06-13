// fichero 49305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49305;

Registro49305 crear_registro49305(int id) {
    Registro49305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49305(Registro49305 r) {
    return r.valor + r.id;
}
