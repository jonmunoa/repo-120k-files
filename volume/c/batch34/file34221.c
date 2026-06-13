// fichero 34221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34221;

Registro34221 crear_registro34221(int id) {
    Registro34221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34221(Registro34221 r) {
    return r.valor + r.id;
}
