// fichero 34401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34401;

Registro34401 crear_registro34401(int id) {
    Registro34401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34401(Registro34401 r) {
    return r.valor + r.id;
}
