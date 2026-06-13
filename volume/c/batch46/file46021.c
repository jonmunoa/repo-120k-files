// fichero 46021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46021;

Registro46021 crear_registro46021(int id) {
    Registro46021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46021(Registro46021 r) {
    return r.valor + r.id;
}
