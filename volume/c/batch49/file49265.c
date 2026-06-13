// fichero 49265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49265;

Registro49265 crear_registro49265(int id) {
    Registro49265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49265(Registro49265 r) {
    return r.valor + r.id;
}
