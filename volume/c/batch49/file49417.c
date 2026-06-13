// fichero 49417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49417;

Registro49417 crear_registro49417(int id) {
    Registro49417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49417(Registro49417 r) {
    return r.valor + r.id;
}
