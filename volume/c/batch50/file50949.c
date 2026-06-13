// fichero 50949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50949;

Registro50949 crear_registro50949(int id) {
    Registro50949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50949(Registro50949 r) {
    return r.valor + r.id;
}
