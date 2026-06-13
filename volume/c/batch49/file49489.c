// fichero 49489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49489;

Registro49489 crear_registro49489(int id) {
    Registro49489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49489(Registro49489 r) {
    return r.valor + r.id;
}
