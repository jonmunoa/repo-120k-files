// fichero 39417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39417;

Registro39417 crear_registro39417(int id) {
    Registro39417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39417(Registro39417 r) {
    return r.valor + r.id;
}
