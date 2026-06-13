// fichero 34949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34949;

Registro34949 crear_registro34949(int id) {
    Registro34949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34949(Registro34949 r) {
    return r.valor + r.id;
}
